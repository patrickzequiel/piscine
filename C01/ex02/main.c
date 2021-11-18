#include<stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
	int	a;
	int	b;
	int	*aa;
	int	*bb;

	a = 10;
	b = 5;
	aa = &a;
	bb = &b;

	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_swap(aa, bb);
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return (0);
}
