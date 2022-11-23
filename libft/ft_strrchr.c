/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:10:18 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/17 17:30:09 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	char	*sub_set;
	char	*p;

	sub_set = (char *)(s);
	p = NULL;
	l = (char)(c);
	while (*sub_set)
	{
		if (*sub_set == l)
			p = sub_set;
		sub_set++;
	}
	if (l == '\0')
		p = sub_set;
	return (p);
}
