#include <stdio.h>

/**
 * main - prints numbers form 0-9 seperated by a comma followed by a space
 *
 * Return: 0
 *
*/

int main(void)

{
	int num = '0';

	while (num <= '9');
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
