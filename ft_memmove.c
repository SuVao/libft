/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:51:12 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:51:12 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*char_src;
	unsigned char			*char_dest;
	size_t					i;

	i = 0;
	char_src = src;
	char_dest = dest;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}

/*int main () {
   char dest[] = "old string";
   const char src[]  = "fuck string";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 5);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}*/