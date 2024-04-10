/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:59:21 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 12:41:09 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	char	*str1;
	char	*str2;
	size_t		i;
	size_t		j;
	size_t		tam;

	tam = ft_strlen(s1) + ft_strlen(s2);
	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	j = 0;
	new_str = (char *)malloc((sizeof(char) * (tam + 1)));
	if (!new_str)
		return (NULL);
	while (str1[j] != '\0')
		new_str[i++] = str1[j++];
	j = 0;
	while (str2[j] != '\0')
		new_str[i++] = str2[j++];
	new_str[j] = '\0';
	return (new_str);
}

int main()
{
	const char	s1[] = {"ola "};
	const char	s2[] = {"caralho!"};
	char		*new_string;

	new_string = ft_strjoin(s1, s2);
	printf("nova string: %s", new_string);
	free (new_string);
	return (0);
}