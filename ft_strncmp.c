/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:43:06 by marvin            #+#    #+#             */
/*   Updated: 2024/04/09 09:43:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t nb)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (i < nb && (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if (nb == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*
int		main()
{
	char	s1[] = { "aaaa"};
	char	s2[] = { "abaaa"};

	printf("strncmp: %d", ft_strncmp(s1, s2, 2));
	return 0;
}*/
