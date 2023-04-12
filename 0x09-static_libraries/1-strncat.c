#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Specified bytes from source
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
        int index = 0;
        int destlen = 0;

        while (dest[index++])
                destlen++;
        for (index = 0; src[index] && index < n; index++)
                dest[destlen++] = src[index];
        return (dest);
}
