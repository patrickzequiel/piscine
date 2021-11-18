#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_list(int *nbr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(nbr[i] + '0');
		i++;
	}
}

int	ft_position(int *nbr, int n)
{
	int	i;
	int	max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		if (nbr[i] == max)
			return (i - 1);
		if (i == (n - 1) && nbr[i] < max)
			return (i);
		i++;
		max++;
	}
	return (-1);
}

void	ft_add_nbr(int *nbr, int n, int pos)
{
	int	i;

	i = pos + 1;
	nbr[pos]++;
	while (i <= n)
	{
		nbr[i] = nbr[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];
	int	pos_index;
	
	if (n >= 10 || n < 0)
		return ;
	else
	{
		i = 0;
		while (i < n)
		{
			tab[i] = i;
			i++;
		}
		while (ft_position(tab, n) != -1)
		{
			pos_index = ft_position(tab, n);
			ft_print_list(tab, n);
			ft_add_nbr(tab, n, pos_index);
			write(1, ", ", 2);
		}
		ft_print_list(tab, n);
	}
}
