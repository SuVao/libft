/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:51:53 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:51:53 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*str1;
	int		i;

	i = 0;
	str1 = (char *)str;
	c %= 256;
	if (c == '\0')
	{
		while (str1[i] != '\0')
			i++;
		return (&str1[i]);
	}
	while (str1[i] != '\0')
	{
		if (str1[i] == c)
			return (&str1[i]);
		i++;
	}
	return (0);
}

// int		main()
// {
// 	char	str1[] = {"ola caralho"};
// 	char	*string;
// 	int	chr = 't' + 256;

// 	char str2[] = "https://www.tutorialspoint.com";
// 	char ch = '.';
// 	char *ret;

// 	ret = strchr(str2, ch);

// 	printf("String after |%c| is - |%s|\n", ch, ret);

// 	string = ft_strchr(str1, chr);
// 	printf("letra encontrada: %s", string);
// 	return (0);
// }