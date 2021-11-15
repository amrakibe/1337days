/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 09:58:59 by amrakibe          #+#    #+#             */
/*   Updated: 2021/09/30 17:24:13 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int main()
{
	int en;

	en = ft_str_is_numeric("998");
	printf("%d\n", en);

	en = ft_str_is_numeric("-@?>");
		printf("%d\n", en);
	return(0);
}
*/
