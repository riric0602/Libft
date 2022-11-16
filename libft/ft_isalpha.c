/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:50:14 by rchbouki          #+#    #+#             */
/*   Updated: 2022/11/16 11:40:20 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// 26 is the ascii value of eof
int	ft_isalpha(int c)
{
	if ((c == 26) || (c < 65) || (c > 122))
		return (0);
	if ((c > 90) && (c < 97))
		return (0);
	return (1);
}
