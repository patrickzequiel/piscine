/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacruz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:34:55 by pacruz            #+#    #+#             */
/*   Updated: 2021/11/25 14:19:45 by pacruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	unsigned int	count_2;

	count = 0;
	while (dest[count] != '\0')
		count++;
	count_2 = 0;
	while (src[count_2] && count_2 < nb)
	{
		dest[count] = src[count_2];
		count_2++;
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
