#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

char *cap_string(char *sed)
{
        /*Initializing the variable I will use in the loop*/
        int des = 0;

        /*if statement to capitalize first character if it is lowercase*/
        if (sed[des] >= 'a' && sed[des] <= 'z')
        {
                sed[des] = sed[des] - ('a' - 'A');
        }

        /**
         * I introduce a loop to scan through the string
         * and capitalize characters after space.
         */
        for (des = 1; sed[des] != '\0'; des++)
        {
                if (sed[des - 1] == ' ' && sed[des] >= 'a' && sed[des] <= 'z')
                {
                        sed[des] = sed[des] - ('a' - 'A');
                }
        }

        return (sed);
}
