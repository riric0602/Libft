/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:26:04 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/22 17:08:58 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	if (!s)
		return (NULL);
	new = malloc(len + 1);
	i = 0;
	if (!new)
		return (NULL);
	if (ft_strlen(s) == 0)
		return (NULL);
	if ((start >= (unsigned int)ft_strlen(s)))
	{
		new[i] = '\0';
		return (new);
	}
	while ((i < len) && (s[start + i]))
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
#include <string.h>

int	main(void)
{
	char *s = ft_substr(ft_strdup("1"), 42, 42000000);
	printf("%s, %lu\n", s, ft_strlen(s));
}*/