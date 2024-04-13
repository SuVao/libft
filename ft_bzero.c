/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:48:55 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:48:55 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *str, size_t	num)
{
	unsigned char	*char_str;
	size_t			i;

	i = 0;
	char_str = str;
	while (i < num)
		char_str[i++] = '\0';
}

/*int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_bzero(str + 3, 1);
   puts(str);

   return(0);
}*/