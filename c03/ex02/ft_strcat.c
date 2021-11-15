/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:50:21 by amrakibe          #+#    #+#             */
/*   Updated: 2021/10/03 13:07:08 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	b;

	i = 0;
	while (dest[i] != '\0')
		i++;
	b = 0;
	while (src[b] != '\0')
	{
		dest[i + b] = src[b];
		b++;
	}
	dest[i + b] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main()
{
	char dest[] = "a";
	char src[] = "viii";

	printf("%s", ft_strcat(dest, src));
	return(0);
}
*/
