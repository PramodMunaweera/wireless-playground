#define SCALE 15
#define B0 32768
#define B1 -64977
#define B2 32768
#define A0 32768
#define A1 -64554
#define A2 32342

int mul(int a, int b) {
	return (a * b) >> SCALE;
}

int filter(int x0, int x1, int x2, int y1, int y2) {
	return mul(B0,x0) + mul(B1,x1) - mul(A1,y1) + mul(B2,x2) - mul(A2,y2);
}

void __attribute__ ((noinline)) filterloop() {
	int data, status, done = 0;
	int x0 = 0, x1 = 0, x2 = 0, y0 = 0, y1 = 0, y2 = 0;

	_TCE_FIFO_S16_STREAM_IN(0, data, status);
	do {
		x2 = x1;
		x1 = x0;
		x0 = data;

		y2 = y1;
		y1 = y0;
		y0 = filter(x0, x1, x2, y1, y2);

		_TCE_FIFO_S16_STREAM_OUT(y0);

		done = (status == 0);
		_TCE_FIFO_S16_STREAM_IN(0, data, status);
	} while (!done);
}

void sample_copy (int count) {
	int i, temp, status;
	for (i = 0; i < count; i ++) {
		_TCE_FIFO_S16_STREAM_IN(0, temp, status);
		_TCE_FIFO_S16_STREAM_OUT(temp);
	}
}

int main (int argc, char *argv[])  {
	sample_copy(44);
	filterloop();
	return 0;
}

