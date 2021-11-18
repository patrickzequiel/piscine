#include<unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int *temp;

	temp = tab;
	tab = &size;
	size = temp;
}
