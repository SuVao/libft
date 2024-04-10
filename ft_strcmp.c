/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:07:09 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 13:07:09 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_strcmp(const char *str1, const char *str2)
{
	char	*s1;
	char	*s2;
	int		i;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int		main()
{
	char	s1[] = { "ola caralho!"};
	char	s2[] = { "ola caralh2!"};

	printf("strcmp: %d", ft_strcmp(s1, s2));
	return 0;
}*/