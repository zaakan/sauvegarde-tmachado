/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 09:41:55 by tmachado          #+#    #+#             */
/*   Updated: 2018/07/25 10:26:55 by tmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(srt[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = argc;
	while (i > 1)
	{
		ft_putstr(argv[i] - 1);
		ft_putchar('\n');
		i--;
	}
	return (0);
}
