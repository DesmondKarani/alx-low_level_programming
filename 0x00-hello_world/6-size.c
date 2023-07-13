#include <stdio.h>
main()
{
	printf("Size of char: %zu byte\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	printf("Size of pointer: %zu bytes\n", sizeof(void *));
	return (0);
}
