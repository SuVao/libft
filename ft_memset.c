/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:06:44 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 13:06:44 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*char_ptr;
	size_t			i;

	i = 0;
	char_ptr = ptr;
	while (i < num)
		char_ptr[i++] = value;
	return (ptr);
}

/*int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);

   return(0);
}*/