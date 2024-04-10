/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:44:15 by marvin            #+#    #+#             */
/*   Updated: 2024/04/09 09:44:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*str;
	char	*to_find;
	int		i;
	int		j;

	i = 0;
	str = (char *)s1;
	to_find = (char *)s2;
	while (str[i])
	{
		j = 0;
		if (str[i + 1] == to_find[j])
		{
			while (str[i] == to_find[j] && to_find[j] != '\0')
				j++;
		}
		i++;
	}
	return (to_find);
}

/*int main () {
   char haystack[20] = "TutorialsPoint";
   char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);
   
   return(0);
}*/
