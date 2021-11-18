#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int weight, int	height)
{
	int	l;
	int	c;
	
	while(l <= weight)
	{
		while(c <= h)
			{
				if(l == 1 && c == 1)
				{
					putchar('/');
				}
				if(l != 1 && (c == 1 && c != height))
				{
					putchar('*')
				}
