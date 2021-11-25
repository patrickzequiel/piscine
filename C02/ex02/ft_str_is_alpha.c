/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pacruz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:33:14 by pacruz            #+#    #+#             */
/*   Updated: 2021/11/18 17:45:21 by pacruz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
	{
		if((str[i] > 'a' || str[i] > 'z') || (str[i] > 'Z' || str[i] < 'A'))
		   i++;
 		else
			return 0;		
	}
	return 1;
}

int	main(void)
{
	int	i;
	char *str = "Hello";
	
	printf("%s \n", str);
	i = ft_str_is_alpha(str);
	printf("%d \n", i);
}
