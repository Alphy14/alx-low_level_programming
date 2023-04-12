#include "main.h"
/**
 * _strstr - finds the first occurrence
 * of the substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 * @haystack: String
 * @needle: String
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
        while (*haystack != '\0')
        {
                char *tmp1 = haystack;
                char *tmp2 = needle;

                while (*tmp1 == *tmp2 && *tmp2 != '\0')
                {
                        tmp1++;
                        tmp2++;
                }
                if (*tmp2 == '\0')
                        return (haystack);
                haystack++;
        }
        return (NULL);
}
