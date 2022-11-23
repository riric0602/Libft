/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:26:10 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/22 15:11:14 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = ft_strlen(dst);
	len = i;
	j = 0;
	if (len > dstsize)
		return (ft_strlen(src) + dstsize);
	while ((j < dstsize - len - 1) && (src[j]) && dstsize > len + 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len + ft_strlen(src));
}
