#include "sys/alt_stdio.h"
#include "system.h"
#include "altera_avalon_pio_regs.h"

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

void filterloop() {
	int data, status, done = 0;
	int x0 = 0, x1 = 0, x2 = 0, y0 = 0, y1 = 0, y2 = 0;

	status = CUSTOM_1(); 	// acquire status from IO
	data = CUSTOM_0();		// acquire data from IO
	do {
		x2 = x1;
		x1 = x0;
		x0 = data;

		y2 = y1;
		y1 = y0;
		y0 = filter(x0, x1, x2, y1, y2);

		CUSTOM_4(y0);		// write data to IO

		done = (status == 0);
		status = CUSTOM_1();// acquire status from IO
		data = CUSTOM_0();	// acquire data from IO
	} while (!done);
}

void sample_copy (int count) {
	int i, temp;
	for (i = 0; i < count; i ++) {
		temp = ALT_CI_CNTR_0(0);
		ALT_CI_EXTOUT_0(temp);
	}
}

int main (int argc, char *argv[])  {
	CUSTOM_2();
	sample_copy(44);
	IOWR_ALTERA_AVALON_PIO_DATA(FLAG_BASE, 1);
	IOWR_ALTERA_AVALON_PIO_DATA(FLAG_BASE, 0);
	filterloop();
	IOWR_ALTERA_AVALON_PIO_DATA(FLAG_BASE, 1);
	return 0;
}
