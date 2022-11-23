/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 10:44:03 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/19 16:23:41 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*sub_set;
	void	*p;
	int		cmp;

	sub_set = (char *)(s);
	p = (void *)(s);
	if (c > 127)
		c = (char)(c);
	while (n > 0)
	{
		cmp = (int)(*sub_set);
		if (cmp == c)
			return (p);
		p++;
		n--;
		sub_set++;
	}
	return (NULL);
}
