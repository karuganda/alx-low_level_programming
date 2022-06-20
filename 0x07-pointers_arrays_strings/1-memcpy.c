#include "main.h"
/**
* _memcpy - description 
* @dest: description
* @src: description
* @n: description
* Return: return value
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < n)
	{
		*(dest + i) = *(src + j);
		i += 1;
		j += 1;
	}
	return (dest);
}
