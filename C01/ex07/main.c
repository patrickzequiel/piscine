#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int tab2;
	int size;
	
	tab2 = 2;
	tab = &tab2;
	size = 10;
	printf("%d tab\n", *tab);
	printf("%d size\n", size); 
	ft_rev_int_tab(tab, size);
	printf("%d tab\n", *tab);
	printf("%d size\n", size); 
}
