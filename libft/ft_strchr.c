/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:38:13 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/17 17:09:54 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	l;
	char	*sub_set;

	sub_set = (char *)(s);
	l = (char)(c);
	while (*sub_set)
	{
		if (*sub_set == l)
			return (sub_set);
		sub_set++;
	}
	if (l == '\0')
		return (sub_set);
	return (NULL);
}
