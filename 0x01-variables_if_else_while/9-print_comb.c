#include <stdio.h>
/**
 * main - entry point
 * Return: alway returns 0
 */
int main(void)
{
	unsigned char a = '0';
	int i;

	for (i = 10; i < 20; i++)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar (',');
			putchar (' ');
		}
	}
		putchar('\n');
		return (0);
}
