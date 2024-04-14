/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:26:34 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:26:34 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int	ft_strncmp(const char *s1, const char *s2, size_t nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && i < nb - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int		main()
// {
// 	printf("strncmp: %d", ft_strncmp("test\200", "test\0", 6));
// 	return 0;
// }
