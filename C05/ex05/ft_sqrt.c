/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:26:50 by amrakibe          #+#    #+#             */
/*   Updated: 2021/10/11 20:03:52 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int	root;
	long int	num;

	num = nb;
	if (num < 0)
		return (0);
	root = 1;
	while (root * root <= num)
	{
		if (root * root == num)
			return (root);
		root++;
	}
	return (0);
}
