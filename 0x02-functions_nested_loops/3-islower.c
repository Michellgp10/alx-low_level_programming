#include"main.h"
/**
 * _islower - a function that checks for lowercase character
 * @k: character to be checked
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _islower(int k)
{
	if ((k >= 'a') && (k <= 'z'))
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
