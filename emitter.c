#include <math.h>
#include <stdio.h>
#include "emitter.h"

void emit(char *msg, double v) {
	double newv = round(v);
	printf("(%lu) %s\n", (unsigned long int) newv, msg);
	fflush(stdout);
	return;
}

