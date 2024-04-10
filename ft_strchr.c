/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:41:40 by marvin            #+#    #+#             */
/*   Updated: 2024/04/09 09:41:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
/*int		main()
{
	char	str1[] = {"ola caralho"};
	char	*string;
	char	chr = 'r';

	char str2[] = "https://www.tutorialspoint.com";
	char ch = '.';
	char *ret;

	ret = strchr(str2, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);

	string = ft_strchr(str1, chr);
	printf("letra encontrada: %s", string);
	return (0);
}*/