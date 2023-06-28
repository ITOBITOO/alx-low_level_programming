#include "main.h"
#include <unistd.h>
int _strlen(char *s)
/**
 * _strlen return the length of a string
 * Owned By Bwave
 * @s: char to check
 * Description: this will return the length of a string
 * Return: 0 is success
*/ 
{
	int a = 0;

	for (; *s++;)
{
	a++;
}
	return (a);
}
