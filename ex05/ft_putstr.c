#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_putstr(char *str)
{
	int b;
	b = 0;
	while(str[b])
	{
		write(1, &str[b], 1);
		b++;
	}
}

