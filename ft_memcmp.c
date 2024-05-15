/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 17:24:51 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/15 17:30:45 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if ((unsigned char *)s1[i] != (unsigned char *)s2[i])
			return ((unsigned char *)s1[i] - (unsigned char *)s2[i]);
		i++;
	}
}
