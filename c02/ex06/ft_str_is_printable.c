/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:36:50 by amrakibe          #+#    #+#             */
/*   Updated: 2021/09/30 11:31:48 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 31 || str[i] > 127)
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>

int	main()
{
	int test;

	test = ft_str_is_printable("aM)iÖ(");
	printf("%d\n", test);
}
*/
