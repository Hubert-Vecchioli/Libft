/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 09:52:00 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/15 15:10:55 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*from = (char *) src;
	char	*to = (char *) dest;
	size_t	i;

	if (from == to || n == 0)
		return dest;
	if (to > from && to-from < (int)n) {
		i = n - 1;
		while (i >= 0)
		{
			to[i] = from[i];
			i--;
		}
		return dest;
	}
	if (from > to && from-to < (int)n) {
		i = 0;
		while (i < n)
		{
			to[i] = from[i];
		}
		return dest;
	}
	memcpy(dest, src, n);
	return dest;
}
