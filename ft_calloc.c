/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:41:36 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/16 10:00:01 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*result;
	size_t	i;

	result = malloc(n * size);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < n * size)
	{
		result[i] = 0;
		i++;
	}
	return (result);
}
