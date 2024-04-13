/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:10:47 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 13:10:47 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t nb)
{
	size_t	i;

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
