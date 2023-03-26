#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * char_find - char to a string
 * @c: char
 * Return: string
 */

char *char_find(va_list c)
{
	char string[2];
	char *p;

	p = string;
	string[0] = va_arg(c, int);
	string[1] = '\0';
	
	return (p);
}

/**
 * string_find - string to print
 * @s: string
 * Return: string
 */

char *string_find(va_list s)
{
	char *string;

	string = va_arg(s, char *);
	
	if (string == NULL)
		return ("(null)");
	
	return (string);
}

/**
 * percent_find - passes a '%' sign
 * Return: percent sign
 */

char *percent_find(void)
{
	char *string;

	string = "%";
	
	return (string);
}

/**
 * int_find - ints to char arrays
 * @npoint: int to convert from va_args
 * Return: pointer to string
 */

char *int_find(va_list npoint)
{
	int n;
	int i, res, temp, expo, count;
	char *string;

	n = va_arg(npoint, int);
	count = i = 0;
	expo = 1;
	n >= 0 ? (res = n * -1) : (res = n, count++);
	temp = res;
	
	while (temp <= -10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	
	string = malloc((count + 1) * sizeof(char));
	
	if (string == NULL)
		return (NULL);
	
	if (n < 0)
		string[i++] = '-';
	
	while (expo >= 1)
	{
		string[i++] = (((res / expo) % 10) * -1 + '0');
		expo /= 10;
	}
	
	return (string);
}

/**
 * unsigned_find - converts unsigned to char array
 * @unsign: un int to convert from va_args
 * Return: pointer to string
 */

char *unsigned_find(va_list unsign)
{
	unsigned int i, res, temp, expo, count;
	char *string;

	res = va_arg(unsign, unsigned int);
	count = i = 0;
	expo = 1;
	temp = res;
	
	while (temp >= 10)
	{
		expo *= 10;
		temp /= 10;
		count++;
	}
	
	string = malloc((count + 1) * sizeof(char));
	
	if (string == NULL)
		return (NULL);
	
	while (expo >= 1)
	{
		string[i++] = (((res / expo) % 10) + '0');
		expo /= 10;
	}
	
	return (string);
}
