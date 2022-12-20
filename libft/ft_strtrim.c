/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 14:41:46 by rchbouki          #+#    #+#             */
/*   Updated: 2022/12/02 13:12:13 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) && i != 0)
		i--;
	if (i == 0)
		return (0);
	return (i + 1);
}

static int	ft_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		start;
	int		end;

	if (!set || !s1)
		return (NULL);
	new = NULL;
	if (!*set && *s1)
		return (ft_strdup((char *)s1));
	start = ft_start(s1, set);
	end = ft_end(s1, set);
	if (!*s1 || (end == 0 && start == (int)ft_strlen(s1)))
	{
		new = malloc(sizeof(char) * 1);
		if (!new)
			return (NULL);
		ft_strlcpy(new, "", 1);
		return (new);
	}
	if (start == -1 || end == -1)
		return ((char *)s1);
	return (ft_substr(s1, start, end - start));
}
