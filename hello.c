#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "emitter.h"

int main(void) {
	double d;

	srand((unsigned int) time(NULL));
	d = (double) rand() + M_PI;
	emit("Hello, World!", d);
	return EXIT_SUCCESS;
}

