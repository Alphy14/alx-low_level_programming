#include "main.h"
/**
* _strpbrk - locates the first occurrence in the string s
* of any of the bytes in the string accept
* @s: String
* @accept: String
* Return: pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
        int index;

        while (*s)
        {
                for (index = 0; accept[index]; index++)
                {
                        if (*s == accept[index])
                                return (s);
                }
                s++;
        }
        return (NULL);
}
