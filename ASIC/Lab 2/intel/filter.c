#include "file_int32.h"

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

void filterloop(FILE *in, FILE *out) {
	int data, status, done = 0;
	int x0 = 0, x1 = 0, x2 = 0, y0 = 0, y1 = 0, y2 = 0;

	status = feof(in);
	data = sample_read(in);
	do {
		x2 = x1;
		x1 = x0;
		x0 = data;

		y2 = y1;
		y1 = y0;
		y0 = filter(x0, x1, x2, y1, y2);

		sample_write(out, y0);

		done = (status != 0);
		status = feof(in);
		data = sample_read(in);
	} while (!done);
}

int main (int argc, char *argv[])  {
	if (argc != 4) {
		printf("Please provide four arguments: input_file output_file header_length\n");
		return 0;
	}

	FILE *in = fopen(argv[1], "rb");
	FILE *out = fopen(argv[2], "wb");

	if (in == NULL || out == NULL) {
		printf("Could not open one of the files\n");
		return 0;
	}

	sample_copy(out, in, atoi(argv[3]));

	filterloop(in, out);

	fclose(in);
	fclose(out);

	return 0;
}

