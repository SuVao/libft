/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:52:15 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:52:15 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	n;
	char	*str_cpy;

	i = 0;
	n = ft_strlen(s);
	str_cpy = (char *)malloc(sizeof(char) * (n + 1));
	if (!str_cpy)
		return (0);
	while (i < n || s[i] != '\0')
	{
		str_cpy[i] = s[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}

// int main()
// {
//     char source[] = "GeeksForGeeks";
//     char	*target = ft_strdup(source, 14); 
//     printf("%s", target);
// 	free(target);
//     return 0;
// }
