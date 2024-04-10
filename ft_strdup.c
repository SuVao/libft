/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:07:24 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 13:07:24 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	const char	*src;
	size_t		i;
	size_t		tam;
	char		*str_cpy;

	i = 0;
	src = s;
	tam = ft_strlen(s);
	str_cpy = (char *)malloc(sizeof(char) * tam);
	if (!str_cpy)
		return (0);
	while (src[i] != '\0')
	{
		str_cpy[i] = src[i];
		i++;
	}
	str_cpy[i] = '\0';
	return (str_cpy);
}
/*int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char	*target = ft_strdup(source, 14); 
 
    printf("%s", target);
	free(target);
    return 0;
}*/