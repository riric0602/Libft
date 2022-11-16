/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:00:08 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/16 11:41:33 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*sub_set;
	size_t	i;

	sub_set = (char *)(b);
	i = 0;
	while (i < len)
	{
		*sub_set = c;
		i++;
		sub_set++;
	}
	return (b);
}
