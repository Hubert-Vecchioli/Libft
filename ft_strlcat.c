/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:14:42 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/16 15:07:52 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	if (dest_size >= size)
		return (ft_strlen(src) + size);
	while (*(src + i) && i < (size - dest_size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = 0;
	return (dest_size + ft_strlen(src));
}
