/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:18:25 by amrakibe          #+#    #+#             */
/*   Updated: 2021/09/28 16:00:46 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>

int main(void)
{
    int a;
    int b;
    int c;
    int d;

	c = 350158448;
	d = 1213562697;
	a = 1041792934;
	b = 922;
	ft_div_mod(a, b, &c, &d);
	printf("%d %d\n", c, d);

    return (0);
}
*/
