#include"main.h"

/**
 * print_number - print an interger.
 *
 * @n: The interger to be printed.
 */

void print_number(int n)
{	
	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		nim = -num;
	}

	/*print the first few digits*/
	if ((num / 10) > 0)
		print_number(num / 10);

	/*print the last digit*/
	if (num / 100) > 0)
