/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:06:12 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 13:06:12 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str_s1;
	const char	*str_s2;
	int			i;
	int			tam;

	str_s1 = s1;
	str_s2 = s2;
	i = 0;
	tam = (int)n;
	while (i < tam && (str_s1[i] == str_s2[i]
			&& str_s1[i] != '\0' && str_s2[i] != '\0'))
		i++;
	if (tam == 0)
		return (0);
	printf("%d \n", str_s1[i] - str_s2[i]);
	return (str_s1[i] - str_s2[i]);
}

/*int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   
   return(0);
}*/