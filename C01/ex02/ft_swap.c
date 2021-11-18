#include<unistd.h>

void    ft_swap(int *a, int *b)
{
	int	aa;

	aa = *a;
	*a = *b;
	*b = aa;
}
