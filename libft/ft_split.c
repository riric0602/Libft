/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:58:32 by rchbouki          #+#    #+#             */
/*   Updated: 2022/12/02 14:54:01 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words(char const *s, char c)
{
	int	i;
	int	words;

	if ((int)ft_strlen(s) == 0)
		return (0);
	if (c == 0)
		return (1);
	words = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] != c && s[i])
			i++;
		words++;
		while (s[i] == c && s[i])
			i++;
	}
	return (words);
}

static void	*ft_free(char **res, int j)
{
	while (j >= 0)
		free(res[j--]);
	free(res);
	return (NULL);
}

static char	**ft_fill(char const *s, char **res, char c)
{
	int	start;
	int	end;
	int	j;

	start = 0;
	end = 0;
	j = 0;
	while (s[start] && j < ft_words(s, c))
	{
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		res[j] = ft_substr(s, start, end - start);
		if (!res[j])
			return (ft_free(res, j));
		j++;
		start = end;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = ft_words(s, c);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	if (words == 0)
		res[0] = NULL;
	else
		res = ft_fill(s, res, c);
	return (res);
}
