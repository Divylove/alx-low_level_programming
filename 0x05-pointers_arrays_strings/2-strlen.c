#include <stdio.h>
#include "main.h"
/**
 * _strlen - print the length of a string
 * @s: the string
 *Return: the length of the string
 */
int _strlen(char *s)
{
int i = 0, lent = 0;
while (s[i] != '\0')
{
i++;
lent++;
}
return (lent);
}
