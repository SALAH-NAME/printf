#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string input
 * Return: length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;

	return (i);
}

/**
 * chartos - char to a str
 * @c: char input
 * Return: pointer to string
 */

char *chartos(char c)
{
	char string[1];
	char *p;

	p = string;
	string[0] = c;

	return (p);
}

/**
 * nothing_found - no matches found but '%' passed
 * @c: character unmatched
 * Return: string with percent and character.
 */

char *nothing_found(char c)
{
	char string[3];
	char *p;

	p = string;
	string[0] = '%';
	string[1] = c;
	string[2] = '\0';

	return (p);
}

/**
 * _puts - print a buffer
 * @buffer: buffer passed
 * @size: num of bytes to print
 */

void _puts(char *buffer, int size)
{
	write(1, buffer, size);
}

/**
 * rev_string - reverse the contents of an array of int
 * @a: int array to reverse
 * @n: number of elements in the array
 * Return: concatenated string
 */

char *rev_string(char *a, int n)
{
	char *begin = a;
	char *end;
	char hold;

	end = a + n - 1;
	
	for (; begin < end; begin++, end--)
	{
		hold = *end;
		*end = *begin;
		*begin = hold;
	}
	
	return (a);
}
