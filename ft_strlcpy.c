/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 15:11:57 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/15 15:15:25 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (*(src + length))
	{
		length++;
	}
	if (size < 1)
		return (length);
	while (*(src + i) && i < (size - 1))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
	return (length);
}
