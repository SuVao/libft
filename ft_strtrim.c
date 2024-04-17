/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:53:51 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:53:51 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_itsset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new_s;
	int		i;
	int		j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_itsset(s1[i], set))
		++i;
	j = ft_strlen(s1);
	while (j > i && ft_itsset(s1[j - 1], set))
		--j;
	new_s = ft_substr(s1, i, j - i);
	return (new_s);
}

// int		main()
// {
// 	const char	s1[] = {"lorem \n ipsum \t dolor \n sit \t ametol"};
// 	const char	set[] = {"lo"};
// 	char		*new_string;
// 	new_string = ft_strtrim(s1, set);
// 	printf("string criada: %s \n", new_string);
// 	return (0);
// }