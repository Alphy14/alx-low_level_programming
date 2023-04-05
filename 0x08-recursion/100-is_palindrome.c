#include "main.h"
int _strlen(char *str);
int check_palindrome(int l, int r, char *str);
/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: String
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palindrome(0, _strlen(s) - 1, s));
}
/**
 * _strlen - finds the length of a string
 * @str: String
 * Return: The length of the string
 */
int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(str + 1));
}
/**
 * check_palindrome - checks to see if a string is a
 * palindrome or not
 * @l: Left index
 * @r: Length of string - 1
 * @str: String
 * Return: 1 if its a palindrome and 0 if its not
 */
int check_palindrome(int l, int r, char *str)
{
	if (*(str + l) != *(str + r))
		return (0);
	if (l >= r)
		return (1);
	return (check_palindrome(l + 1, r - 1, str));
}
