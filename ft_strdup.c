/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:42:23 by marvin            #+#    #+#             */
/*   Updated: 2024/04/09 09:42:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s, size_t n)
{
	const char		*src;
	char			*str_cpy;
	size_t			i;
	size_t			tam;

	tam = n;
	i = 0;
	src = s;
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