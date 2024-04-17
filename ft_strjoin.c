/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:52:30 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:52:30 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

static size_t	t_strlen(const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

static char	*new_str(size_t tam)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * (tam + 1));
	if (!new_str)
		return (NULL);
	return (new_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*new_s;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (!str1 || !str2)
		return (NULL);
	new_s = new_str(t_strlen(s1) + t_strlen(s2));
	if (!new_s)
		return (NULL);
	while (*str1)
		new_s[i++] = *str1++;
	while (*str2)
		new_s[i++] = *str2++;
	new_s[i] = '\0';
	return (new_s);
}

/*int main()
{
	const char	s1[] = {"ola "};
	const char	s2[] = {"caralho!"};
	char		*new_string;

	new_string = ft_strjoin(s1, s2);
	printf("nova string: %s", new_string);
	free(new_string);
	return (0);
}*/