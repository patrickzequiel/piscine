#include<stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int main(void)
{
	int	*divider;
	int	*moder;
	int	a;
	int	b;
	
	a = 5;
	b = 2;
	divider = &a;
	moder = &b;

	printf("divider is %d\n", a);
	printf("moder is %d\n", b);
	ft_div_mod(0, 78, divider, moder);
	printf("divider is %d\n", *divider);
	printf("moder is %d\n", *moder); 
	return (0);
}
