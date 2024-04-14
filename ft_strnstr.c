/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:53:09 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:53:09 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *src, const char *to_find, size_t tam)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(to_find);
	i = 0;
	if (len == 0)
		return ((char *)src);
	while (src[i] && i < tam)
	{
		j = 0;
		while (src[i + j] == to_find[j] && j < len && i + j < tam)
		{
			if (j == len - 1)
				return ((char *)&src[i]);
			j++;
		}
		i++;
	}
	return (0);
}

// int main() {
//     const char source[] = {"Hello, world! This is a test."};
//     char substring[] = {""};
//     size_t max_len = 15; // Limite máximo de caracteres a serem pesquisados

//     char *result = ft_strnstr(source, substring, max_len);
//     if (result != NULL) {
//         printf("Substring encontrada: %s\n", result);
//     } else {
//         printf("Substring não encontrada.\n");
//     }

//     return 0;
// }
