/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:59:12 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/19 15:24:37 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char			*c_1;
	char			*c_2;
	unsigned char	cmp_1;
	unsigned char	cmp_2;
	size_t			i;

	i = 0;
	c_1 = (char *)(s1);
	c_2 = (char *)(s2);
	if (!n)
		return (n);
	if ((!c_1 || !c_2) && (!*c_1 || !*c_2))
		return (0);
	cmp_1 = *c_1;
	cmp_2 = *c_2;
	while (i < n && (c_1 || c_2))
	{
		cmp_1 = (unsigned char)c_1[i];
		cmp_2 = (unsigned char)c_2[i];
		if (cmp_1 != cmp_2)
			return (cmp_1 - cmp_2);
		i++;
	}
	return (cmp_1 - cmp_2);
}
