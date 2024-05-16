/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 16:06:02 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/16 18:26:45 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy_str;
	size_t		i;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s + start);

	copy_str = malloc((len + 1) * sizeof(char));
	if (copy_str == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		copy_str[i] = src[start];
		i++;
		start++;
	}
	copy_str[i] = 0;
	return (copy_str);
}
