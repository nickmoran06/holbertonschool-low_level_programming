#include "holberton.h"
/**
 * string_toupper - lowercase to uppercase
 * @n: string
 * Return: 0 success
 */
char *string_toupper(char *needle)
{
	while (needle[j] && (haystack[i] == needle[0]))
	{
		if (haystack[i + j] == needle[j])
			j++;
		else
			break;
	}
	if (needle[j])
	{
		i++;
		j = 0;
	}
	else
		return (haystack + i);
}

    
}
