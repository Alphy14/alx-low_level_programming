#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * Return: Always 0 (Success)
 * @c: The number to be checked
 */
int _isdigit(int c)
{
        if (c >= 48 && c <= 57)
        {
                return (1);
        }
        else
                return (0);
}
