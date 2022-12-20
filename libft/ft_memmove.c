/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:53:58 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/19 19:21:54 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*my_dst;
	char	*my_src;
	size_t	i;

	my_dst = (char *)(dst);
	my_src = (char *)(src);
	i = 0;
	if (((!dst && !src) && (!len)) || (!dst && !src))
		return (NULL);
	if (dst > src)
	{
		while (len != 0)
		{
			my_dst[len - 1] = my_src[len - 1];
			len--;
		}
		return (dst);
	}
	while (i < len)
	{
		my_dst[i] = my_src[i];
		i++;
	}
	return (dst);
}
