/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacruz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 14:44:05 by pacruz            #+#    #+#             */
/*   Updated: 2021/11/25 14:44:50 by pacruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strlcat(char *dest, char *src, unsigned int nb)
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

