/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:55:49 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/22 15:10:34 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_new;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_new = len_s1 + len_s2;
	new = malloc(len_new + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, len_new + 1);
	i = len_s1;
	while (i < len_new)
	{
		new[i] = s2[i - len_s1];
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("lorem ipsum", ""));
}*/