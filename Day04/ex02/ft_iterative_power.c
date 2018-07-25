/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 23:21:35 by tmachado          #+#    #+#             */
/*   Updated: 2018/07/24 11:14:38 by tmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int stock;
	int p;

	stock = nb;
	p = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (p < power)
	{
		p++;
		nb = stock * nb;
	}
	return (nb);
}
