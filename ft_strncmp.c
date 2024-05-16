/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:47:13 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/16 15:04:20 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 1)
		return (0);
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < (n - 1))
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
