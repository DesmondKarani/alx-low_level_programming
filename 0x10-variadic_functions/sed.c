#include <stdio.h>
#include <stdarg.h>
#include "main.h"
int main(void)
{
	int Multiple;

	Multiple = Times1(2, 3, 6);
	printf("Multiplying 3 by 6 is %d\n", Multiple);
	return 0;
}
