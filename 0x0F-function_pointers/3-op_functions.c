#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returns the sum of a and b
 * @a: Integer 1
 * @b: Integer 2
 *Return: The resulting sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: Integer 1
 * @b: Integer 2
 * Return: The difference between the integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b.
 * @a: Integer1
 * @b: Integer2
 * Return: The resulting product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b.
 * @a: Integer1
 * @b: Integer2
 * Return: Resulting answer
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: Integer1
 * @b: Integer2
 * Return: Remainder of the operation
 */
int op_mod(int a, int b)
{
	return (a % b);
}
