#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *p;

    printf("1 %s\n", s1);
    printf("2 %s", s2);
    p = _strcat(s1, s2);
    printf("3 %s", s1);
    printf("4 %s", s2);
    printf("5 %s", p);
    return (0);
}
