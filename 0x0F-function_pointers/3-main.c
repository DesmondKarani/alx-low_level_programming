#include "3-calc.h"

/**
* main - Entry point
* @argc: Number of arguments passed
* @argv: Array of pointers to arguments
*
* Return: Always 0
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operation = get_op_func(argv[2]);

if (!operation)
{
printf("Error\n");
exit(99);
}

if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

result = operation(num1, num2);
printf("%d\n", result);
return (0);
}
