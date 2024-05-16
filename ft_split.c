/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 17:51:52 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/16 18:29:57 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *src, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (src[i])
	{
		while (src[i] && src[i] == c)
			i++;
		if (src[i])
			count++;
		while (src[i] && src[i] != c)
			i++;
	}
	return (count);
}

static int	ft_count_word_len(char *src, char c, int pos)
{
	int	count;

	count = 0;
	while (src[pos] && src[i] != c)
	{
		pos++;
		count++;
	}
	return (count);
}

static char	**ft_free(char **strs, int i)
{
	while (i > 0)
	{
		free(strs[i]);
		i--;
	}
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;
	int		word_len;

	split = (char **) malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	word_len = 0;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		word_len = ft_count_word_len(s, c, i);
		if (word_len)
		{
			split[j] = ft_substr(s, i, word_len);
			if (!split[j])
				return (ft_free(split, j));
			j++;
		}
		i = i + word_len;
		word_len = 0;
	}
	split[j] = 0;
	return (split);
}

