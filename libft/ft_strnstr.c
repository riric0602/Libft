/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 13:52:42 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/21 11:21:38 by rchbouki         ###   ########.fr       */
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
/*
#include <string.h>
#include <unistd.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

int main(void)
{
	const char	*str;
	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "consectetur", 30)))
			ft_print_result("NULL");
	else
		ft_print_result(str);
	printf("\n");
	printf("real : %s\n", strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
	printf("fake : %s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30));
}*/