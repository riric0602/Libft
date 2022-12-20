/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:52:42 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/30 18:47:08 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*sub_n;
	char	*sub_h;
	size_t	len_n;

	sub_n = (char *)(needle);
	sub_h = (char *)(haystack);
	if ((!haystack && !len) || (!*sub_h && *sub_n))
		return (NULL);
	if (!*sub_n)
		return (sub_h);
	len_n = ft_strlen(sub_n);
	if (len_n > len)
		return (NULL);
	while (sub_h && len)
	{
		if ((*sub_n == *sub_h) && (ft_strncmp(sub_n, sub_h, len_n) == 0))
		{
			if (len >= len_n)
				return (sub_h);
		}
		len--;
		sub_h++;
	}
	return (NULL);
}
