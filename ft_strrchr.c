/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:53:22 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:53:22 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = 0;
	c %= 256;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (0);
}

// int main () {

//    const char str[] = "https://www.tutorialspoint.com";
//    const char ch = 'h';
//    char *ret;
//    ret = ft_strrchr(str, ch);
//    printf("String after |%c| is - |%s|\n", ch, ret);
//    return(0);
// }