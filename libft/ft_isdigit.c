/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:25:59 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/16 11:31:23 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c == 26) || (c < 48) || (c > 57))
		return (0);
	return (1);
}
/*
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int test = atoi(argv[1]);
	printf("%d\n", ft_isdigit(test));
	printf("%d\n", isdigit(test));
	return (argc);
}*/