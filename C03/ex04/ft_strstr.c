/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacruz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:21:30 by pacruz            #+#    #+#             */
/*   Updated: 2021/11/25 14:29:41 by pacruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int	count;
	int	count_2;
	int	res;

	count = 0;
	count_2 = 0;
	res = 0;
	while (to_find[res] != '\0')
		res++;
	while (str[count] != '\0')
	{
		if (str[count] == to_find[count])
			count_2++;
		count++;
	}
	if (count_2 == to_find[res])
		return (to_find);
	else 
		return (0);
}
