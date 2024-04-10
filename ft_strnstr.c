/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:10:56 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 13:10:56 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *src, const char *to_find, size_t tam)
{
	char	*str_src;
	char	*str_find;
	size_t	i;
	size_t	j;

	i = 0;
	str_src = (char *)src;
	str_find = (char *)to_find;
	if (to_find == NULL)
		return (0);
	while (str_src[i] != '\0' && i < tam)
	{
		if (str_src[i + 1] == str_find[j])
		{
			j = 0;
			while (str_src[i] == str_find[j] || str_find[j] != '\0')
				j++;
			if (str_find[j] == '\0')
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
