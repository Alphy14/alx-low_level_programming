#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * more headers goes there
 * Return: Always 0 (Success)
*  betty style doc for function main goes there
*/
int main(void)
{
		int n;
		int Last_digit;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				Last_digit = n % 10;
				if (Last_digit > 5)
				{
					printf("Last digit of %d is %d  and is greater than 5\n", n, Last_digit);
				}
				else if (Last_digit == 0)
				{
					printf("Last digit of %d is %d  and is zero\n", n, Last_digit);
				}
				else if ((Last_digit < 6) && !(Last_digit < 0))
				{
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_digit);
				}
					return (0);
}

