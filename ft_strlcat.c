/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:52:43 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:52:43 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t		a;
	size_t		b;

	a = 0;
	b = 0;
	while (b < size && dest[b])
		b++;
	while ((b + a + 1) < size && src[a])
	{
		dest[b + a] = src[a];
		a++;
	}
	if (b != size)
		dest[b + a] = '\0';
	return (b + ft_strlen(src));
}

// int		main()
// {
// 	char			dest[15] = { "a"};
// 	const char		src[] = { "lorem"};
// 	size_t			res;
// 	res = ft_strlcat(dest, src, 15);
// 	printf("tamanho da string final: %ld \n", res);
// 	return (0);
// }
