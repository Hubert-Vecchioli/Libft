/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 16:27:57 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/15 17:12:02 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(string);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *) &str[i]);
		i--;
	}
	return (NULL);
}
