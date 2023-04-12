#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: The string
 * Return: The converted integer,,
 * 0, if the string does not contain a number
 */
int _atoi(char *s)
{
        int index, d, n, len, f, digit;

        index = 0;
        d = 0;
        n = 0;
        len = 0;
        f = 0;
        digit = 0;

        while (s[len] != '\0')
                len++;

        while (index < len && f == 0)
        {
                if (s[index] == '-')
                        ++d;

                if (s[index] >= '0' && s[index] <= '9')
                {
                        digit = s[index] - '0';
                        if (d % 2)
                                digit = -digit;
                        n = n * 10 + digit;
                        f = 1;
                        if (s[index + 1] < '0' || s[index + 1] > '9')
                                break;
                        f = 0;
                }
                index++;
        }
        if (f == 0)
		return (0);
	return (n);
}
