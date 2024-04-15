/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:55:04 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/15 19:29:18 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (j < len && s[start + j] != '\0')
	{
		str[j] = s[start + j];
		j++;
	}
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