#include "main.h"
/**
* rev_string - reverse array
* @n: integer params
* Return: 0
*/
void rev_string(char *n)
{
	int indx1 = 0;
	int indx2;
	char tmp;

	while (*(n + indx1) != '\0')
	{
		indx1++;
	}
	indx1--;
	for (indx2 = 0; indx2 < indx1; indx2++, indx1--)
	{
		tmp = *(n + indx2);
		*(n + indx2) = *(n + indx1);
		*(n + indx1) = tmp;
	}
}
/**
 * infinite_add - adds two numbers
 * @n1: The first number to be added
 * @n2: The other number to be added
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 * Return: a pointer to the result and
 * 0, If the result can not be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, index1 = 0, index2 = 0, digits = 0;
	int value1 = 0, value2 = 0, tmp_res = 0;

	while (*(n1 + index1) != '\0')
		index1++;
	while (*(n2 + index2) != '\0')
		index2++;
	index1--;
	index2--;
	if (index2 >= size_r || index1 >= size_r)
		return (0);
	while (index2 >= 0 || index1 >= 0 || overflow == 1)
	{
		if (index1 < 0)
			value1 = 0;
		else
			value1 = *(n1 + index1) - '0';
		if (index2 < 0)
			value2 = 0;
		else
			value2 = *(n2 + index2) - '0';
		tmp_res = value1 + value2 + overflow;
		if (tmp_res >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
		{
			return (0);
		}
		*(r + digits) = (tmp_res % 10) + '0';
		digits++;
		index2--;
		index1--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}
