/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 19:44:13 by amrakibe          #+#    #+#             */
/*   Updated: 2021/10/14 13:30:57 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*copy;
	int	len;

	i = 0;
	if (min >= max)
		return (0);
	copy = (int *) malloc ((max - min) * sizeof(int));
	if (!copy)
		return (0);
	while (i < max - min)
	{
		copy[i] = min + i;
		i++;
	}
	return (copy);
}
/*
int	main()
{

	int	min = -9;
	int	max = 10;

	int	*arr = ft_range(min, max);

	int	i = 0;

	while (i < max - min)
	{
		printf("%d \n", arr[i]);
		i++;
	}
}
*/
