/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacruz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:34:55 by pacruz            #+#    #+#             */
/*   Updated: 2021/11/24 14:45:18 by pacruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	count_2;

	count = 0;
	count_2 = 0;
	while (dest[count] != '\0')
		count++;
	count_2 = 0;
	while (src[count_2] != '\0')
	{
		dest[count] = src[count_2];
		count_2++;
		count++;
	}
	return (dest);
}
