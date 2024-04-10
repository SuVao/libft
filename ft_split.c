/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:03:35 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 17:23:52 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_len(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static size_t	count_words(const char s, char c)
{
	size_t	i;
	size_t	count;
	char	*s1;

	i = 0;
	s1 = (char *)s;
	while (s1[i] != '\0')
	{
		if (s1[i] != c)
		{
			count++;
			while (s1[i] != c && s1[i] != '\0')
				i++;
		}
		else if (s1[i] == c)
			i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	
}