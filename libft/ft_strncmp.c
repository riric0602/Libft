/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:32:15 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/19 14:53:20 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	cmp_1;
	unsigned char	cmp_2;

	i = 0;
	if (!n)
		return (n);
	if ((!s1 || !s2) && (!*s1 || !*s2))
		return (0);
	cmp_1 = *s1;
	cmp_2 = *s2;
	while (i < n && (cmp_1 || cmp_2))
	{
		cmp_1 = (unsigned char)s1[i];
		cmp_2 = (unsigned char)s2[i];
		if (cmp_1 != cmp_2)
			return (cmp_1 - cmp_2);
		i++;
	}
	return (cmp_1 - cmp_2);
}
