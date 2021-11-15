/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:34:01 by amrakibe          #+#    #+#             */
/*   Updated: 2021/11/03 21:22:39 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	b;
	int	sign;

	i = 0;
	b = 0;
	sign = 1;
	while (str[i] <= 32 || str[i] >= 127 )
		i++;
	while (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-' )
		{
			sign = sign * -1;
		}
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		b *= 10;
		b += str[i] - 48;
		i++;
	}
	return (b * sign);
}
#include<stdio.h>
int main()
{
	printf("%d", ft_atoi( " --1234ab567"));
}
