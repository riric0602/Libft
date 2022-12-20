/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:26:04 by rchbouki          #+#    #+#             */
/*   Updated: 2022/12/02 13:02:38 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_temp(char *new, char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while ((i < len) && (s[start + i]))
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;

	if (!s)
		return (NULL);
	if ((start >= (unsigned int)ft_strlen(s)) || !ft_strlen(s) || !len)
	{
		new = malloc(sizeof(char) * 1);
		if (!new)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new = malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	new = ft_temp(new, s, start, len);
	return (new);
}
