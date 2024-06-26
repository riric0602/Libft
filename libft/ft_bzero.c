/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:37:28 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/19 14:52:35 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{	
	char	*str;

	if (n != 0)
	{
		str = (char *)(s);
		while (n != 0)
		{
			*str = 0;
			n--;
			str++;
		}
	}
}
