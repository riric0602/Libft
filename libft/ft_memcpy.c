/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:02:33 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/19 19:05:02 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// *restrict indicates that no other pointer will be used to access the object

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*copied_dst;
	char	*copied_src;

	copied_dst = (char *)(dst);
	copied_src = (char *)(src);
	if (!copied_dst && !copied_src)
		return (NULL);
	while (n > 0)
	{
		*copied_dst = *copied_src;
		copied_dst++;
		copied_src++;
		n--;
	}
	return (dst);
}
