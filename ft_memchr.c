/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:40:11 by marvin            #+#    #+#             */
/*   Updated: 2024/04/09 09:40:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (*str)
		i++;
	return (i);
}

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char		*char_str;
	void			*final_str;
	size_t			i;

	i = 0;
	char_str = str;
	final_str = (void *)char_str;
	n = ft_strlen(char_str);
	while (i < n)
	{
		if (char_str[i] == c)
			return (final_str);
		i++;
	}
	return (final_str);
}

/*int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/