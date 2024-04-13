/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:54:07 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:54:07 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	tam;
	size_t	j;
	char	*str;
	char	*sub_str;

	sub_str = (char *)s;
	j = 0;
	tam = len - start;
	str = (char *)malloc(sizeof(char) * (tam + 1));
	if (!s || !str)
		return (NULL);
	while (j < tam + 1 && sub_str[start])
		str[j++] = sub_str[start++];
	str[j] = '\0';
	return (str);
}

/*int		main()
{
	char	str[] = {"ola caralho"};
	size_t	len = 11;
	size_t	start = 4;
	char	*string;

	string = ft_substr(str, start, len);
	printf("string criada: %s \n", string);
	free(string);
	return (0);
}*/