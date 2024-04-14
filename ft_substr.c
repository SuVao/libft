/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:55:04 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/14 18:14:51 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	tam;
	size_t	j;
	char	*str;
	char	*sub_str;

	sub_str = (char *)s;
	j = 0;
	tam = len - start;
	if (len == ft_strlen(s))
		return (sub_str);
	str = (char *)malloc(sizeof(char) * (tam + 1));
	if (!s || !str)
		return (NULL);
	while (j < tam && sub_str[start])
		str[j++] = sub_str[start++];
	str[j] = '\0';
	return (str);
}

// int		main()
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	char	*strsub;

// 	strsub = ft_substr(str, 7, 10);
// 	printf("string criada: %s \n", strsub);
// 	free(strsub);
// 	return (0);
// }