/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 10:34:19 by amrakibe          #+#    #+#             */
/*   Updated: 2021/09/28 15:59:46 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include<stdio.h>
int main(void)
{
	int a;
	int b;

	a = 1568705636;
	b = -1413963156;
	ft_swap(&a, &b);
	printf("%d,%d\n", a, b);
}
*/