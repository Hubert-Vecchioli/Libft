/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 13:46:57 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/16 15:49:49 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	to_find_len = ft_strlen(to_find);
	if (to_find == 0)
		return ((char *)str);
	i = 0;
	while (i < n && str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && (i + j) < n)
		{
			if (j == to_find_len - 1)
				return ((char *) &str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
