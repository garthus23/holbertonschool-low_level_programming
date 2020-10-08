#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen_recursion(char *s);
int is_palindrome2(char *s, int first, int last);

/**
 * is_palindrome - string is a palindrome
 * @s: string
 * Return: 0
 */
int is_palindrome(char *s)
{
	int first;
	int last;

	first = 0;
	last = (_strlen_recursion(s)) - 1;

	if (_strlen_recursion(s) == 0 || _strlen_recursion(s) == 1)
	{
		return (1);
	}
	return (is_palindrome2(s, first, last));
}
/**
 * is_palindrome2 - string is a palindrome
 * @s : a string
 * @first: first character 0
 * @last: last character
 * Return: 0
 */
int is_palindrome2(char *s, int first, int last)
{
	if (first <= last)
	{
		is_palindrome2(s, first + 1, last - 1);
	}

	if (s[first] != s[last])
	{
		return (0);
	}
	return (1);
}
/**
* _strlen_recursion - returns the length of a string
* @s: a string
* Return: an int
*/
int _strlen_recursion(char *s)
{

	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
