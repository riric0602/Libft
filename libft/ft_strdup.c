/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:40:23 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/19 17:00:23 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}
