/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 04:44:30 by tmachado          #+#    #+#             */
/*   Updated: 2018/07/24 01:12:59 by tmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int mu;

	mu = nb;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (mu > 2)
	{
		mu--;
		nb = nb * mu;
	}
	return (nb);
}
