#include<stdio.h>

void ft_ft(int *nbr);

int main(void)
{
	int	*n_nbr;
	int	nbr;

	nbr = 15;
	n_nbr = &nbr;

	ft_ft(n_nbr);
	printf("%d\n", nbr);
	return (0);
}
