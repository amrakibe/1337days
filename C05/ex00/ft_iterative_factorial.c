/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 09:14:18 by amrakibe          #+#    #+#             */
/*   Updated: 2021/10/11 19:18:50 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	b;

	i = 1;
	b = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		b = i * b;
		i++;
	}
	return (b);
}