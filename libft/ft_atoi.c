/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:20:42 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/19 15:02:26 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == '\v')
		i++;
	return (i);
}

int	ft_atoi(const char	*str)
{
	char	*s;
	int		i;
	int		minus;
	int		res;

	s = (char *)(str);
	i = ft_spaces(s);
	res = 0;
	minus = 1;
	if (s[i] == '-' && ft_isdigit(s[i + 1]) == 1)
	{
		i++;
		minus = -1;
	}
	if (s[i] == '+' && ft_isdigit(s[i + 1]) == 1)
		i++;
	while ((s[i] >= '0') && (s[i] <= '9'))
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res * minus);
}
