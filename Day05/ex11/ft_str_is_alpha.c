/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 07:48:38 by tmachado          #+#    #+#             */
/*   Updated: 2018/07/21 00:28:45 by tmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 'z' && str[i] >= 'a')
				|| (str[i] <= 'Z' && str[i] >= 'A'))
			i++;
		else
			break ;
	}
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
