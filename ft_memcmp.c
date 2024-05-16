/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:24:51 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/16 15:11:02 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
		return (0);
	while (i < (n - 1) && (unsigned char *)s1[i] != (unsigned char *)s2[i])
	{
		i++;
	}
	return ((unsigned char *)s1[i] - (unsigned char *)s2[i]);
}
