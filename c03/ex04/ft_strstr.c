/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:11:44 by amrakibe          #+#    #+#             */
/*   Updated: 2021/10/04 11:05:13 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	if (*to_find == '\0')
	{
		return (&str[i]);
	}
	while (str[i] != '\0')
	{
		b = 0;
		while (str[b + i] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
			{
				return (&str[i]);
			}
			b++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char to_find[]= "6345";
	char str[] = "kiwalo";
	printf("%s", ft_strstr(str,to_find));
}
*/
