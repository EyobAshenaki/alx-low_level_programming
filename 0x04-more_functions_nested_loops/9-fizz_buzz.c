#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 if success
 */

int main(void)
{

int i, count = 100;

for (i = 1; i <= count; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);
if (i < count)
printf(" ");
}
printf("\n");

return (0);
}
