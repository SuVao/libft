/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:42:59 by marvin            #+#    #+#             */
/*   Updated: 2024/04/09 09:42:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strlen(const char *str)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)str;
	while (str[i])
		i++;
	return (i);
}

/*int	main()
{
	char	str[] = {"123456"};
	printf("i = %d", ft_strlen(str));
	return 0;
}*/