#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int a = 10;
	int b = 5;
	int *aa = &a;
	int *bb = &b;

	printf("aa is %d\n", *aa);
	printf("bb is %d\n", *bb);
	ft_ultimate_div_mod(aa, bb);
	printf("aa now is %d\n", *aa);
	printf("bb now is %d\n", *bb);
	return (0);
}
