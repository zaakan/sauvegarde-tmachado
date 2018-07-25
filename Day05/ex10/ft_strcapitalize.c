/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmachado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 07:26:40 by tmachado          #+#    #+#             */
/*   Updated: 2018/07/24 11:47:11 by tmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	is_min(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

char	is_maj(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int		is_alphanum(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int verif;

	i = 0;
	verif = 0;
	while (str[i] != '\0')
	{
		if ((is_min(str[i])) && (verif == 0))
			str[i] = str[i] - 32;
		else if ((is_maj(str[i])) && (verif == 1))
			str[i] = str[i] + 32;
		if (!(is_alphanum(str[i])))
			verif = 0;
		else
			verif = 1;
		i++;
	}
	return (str);
}
