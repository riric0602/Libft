/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:02:33 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/16 12:40:02 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// *restrict indicates that no other pointer will be used to access the object

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*copied_dst;
	char	*copied_src;

	copied_dst = (char *)(dst);
	copied_src = (char *)(src);
	while (n > 0)
	{
		*copied_dst = *copied_src;
		copied_dst++;
		copied_src++;
		n--;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dst[50] = "riri";
	char src[50] = "lallll";
	printf("%s\n", ft_memcpy(dst, src, 6));
	printf("%s\n", memcpy(dst, src, 6));
}*/