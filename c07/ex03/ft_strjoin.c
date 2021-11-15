/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 08:43:52 by amrakibe          #+#    #+#             */
/*   Updated: 2021/10/14 09:02:05 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		n;
	int		a;
	int		b;
	int		count;

	b = 0;
	n = 0;
	a = 0;
	count = 1;
	while (a < size)
		count += ft_strlen(strs[a++]) + ft_strlen(sep);
	tab = malloc(sizeof(char *) * count);
	a = -1;
	while (++a < size)
	{
		while (strs[a][b])
			tab[n++] = strs[a][b++];
		b = 0;
		while (sep[b] && a < size - 1)
			tab[n++] = sep[b++];
		b = 0;
	}
	tab[n] = '\0';
	return (tab);
}
