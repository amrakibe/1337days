/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 20:54:10 by amrakibe          #+#    #+#             */
/*   Updated: 2021/10/14 13:30:26 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*copy;
	int		size;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	copy = (int *)malloc(size * sizeof(int));
	if (!copy)
		return (0);
	while (i < size)
	{
		copy[i] = min + i;
		i++;
	}
	*range = copy;
	return (size);
}
