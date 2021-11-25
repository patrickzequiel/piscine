/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacruz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:15:01 by pacruz            #+#    #+#             */
/*   Updated: 2021/11/25 13:43:55 by pacruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 1;
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0'
		&& count < n)
		count++;
	printf("%d \n", s1[count]);
	printf("%d \n", s2[count]);
	return (s1[count] - s2[count]);
}
