/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:07:43 by amrakibe          #+#    #+#             */
/*   Updated: 2021/09/30 11:46:00 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	maj;

	i = 0;
	maj = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || \
				(str[i] >= 'a' && str[i] <= 'z') || \
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (maj && (str[i] >= 'a' && str[i] <= 'z' ))
				str[i] = str[i] - 32;
			else if (!maj && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			maj = 0;
		}
		else
			maj = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
char arr[]= "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(arr));
}
*/
