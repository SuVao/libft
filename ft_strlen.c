/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:10:31 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 13:10:31 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int		i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

/*int	main()
{
	char	str[] = {"123456"};
	printf("i = %d", ft_strlen(str));
	return 0;
}*/