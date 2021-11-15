/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:28:26 by amrakibe          #+#    #+#             */
/*   Updated: 2021/09/30 16:39:23 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0' ;
	return (dest);
}
/*
#include<stdio.h>

int	main(void)
{
	char src[] = "a";
	char dest[] = "";
	printf("%s", ft_strcpy(dest, src));
	return (0);
}*/
