/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:03:35 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/11 22:53:00 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	word_len(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

size_t	s_split(const char *s, char c, char **mat)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = word_len(s, c);
		if (len && *mat)
			mat[i] = ft_substr(s, 0, len - 1);
		i += (len > 0);
		s += word_len(s, c);
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**mat;

	if (!s)
		return (NULL);
	words = s_split((char *)s, c, NULL);
	mat = ft_calloc(sizeof(char *) , (words + 1));
	if (!mat)
		return (NULL);
	s_split((char *)s, c, mat);
	mat[words] = NULL;
	return (mat);
}

int		main()
{
	char		**matrix;
	int			i;

	i = 0;
	matrix = ft_split(".....ola.caralho.fds.puta...", '.');
	while (matrix[i])
	{
		printf("word %d: %s\n", i, matrix[i]);
		i++;
	}
	return (0);
}