/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:43:38 by marvin            #+#    #+#             */
/*   Updated: 2024/04/09 09:43:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *src, char *to_find, size_t tam)
{
	char	*str_src;
	size_t	i;
	size_t	j;

	j = 0;
	str_src = (char *)src;
	if (to_find == NULL)
		return (0);
	while (str_src[i] != '\0' && i < tam)
	{
		if (str_src[i + 1] == to_find[j])
		{
			j = 0;
			while (str_src[i] == to_find[j] || to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (&str_src[i]);
		}
		i++;
	}
	return (0);
}

/*int main() {
    const char source[] = {"Hello, world! This is a test."};
    char substring[] = {"world"};
    size_t max_len = 15; // Limite máximo de caracteres a serem pesquisados

    char *result = ft_strnstr(source, substring, max_len);
    if (result != NULL) {
        printf("Substring encontrada: %s\n", result);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}*/
