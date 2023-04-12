#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: memory area
 * @b: Constant byte
 * @n: Number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        int index;

        for (index = 0; n > 0; index++)
        {
                s[index] = b;
                n--;
        }
        return (s);
}
