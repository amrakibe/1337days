/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:26:06 by amrakibe          #+#    #+#             */
/*   Updated: 2021/09/28 16:03:24 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
#include<stdio.h>
int main()
{
	int  arr[] = {1,2,3,4,5};
	int size = sizeof(arr) / sizeof(int);
	ft_rev_int_tab(arr, size);
	int i = 0;
	while(i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
}
*/
