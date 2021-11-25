/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nespana- jboumal pacruz                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 11:15:01 by nespana-          #+#    #+#             */
/*   Updated: 2021/11/13 11:18:31 by nespana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	write_line(int x, char edge1, char edge2, char center)
{
	int	length;

	length = 0;
	while (length < x)
	{
		if (length == 0)
		{
			ft_putchar(edge1);
		}
		else if (length == x - 1)
		{	
			ft_putchar(edge2);
		}
		else
		{
			ft_putchar(center);
		}
		length++;
	}
	ft_putchar('\n');
}

void	write_rectangle(int x, int y)
{	
	int	row;

	row = 0;
	while (row < y)
	{
		if (row == 0)
		{
			write_line(x, 'A', 'C', 'B');
		}
		else if (row == y - 1)
		{
			write_line(x, 'A', 'C', 'B');
		}
		else
		{
			write_line(x, 'B', 'B', ' ');
		}
		row++;
	}
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
	{
		write(1, "x and y must be positive\n", 25);
	}
	else
	{
		write_rectangle(x, y);
	}
}
