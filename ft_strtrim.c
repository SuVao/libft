/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:12:34 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/10 16:03:14 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	t_len(char *s1, char *set)
{
	size_t	i;
	size_t	j;
	char	*str1;
	char	*sep;

	i = 0;
	j = 0;
	sep = (char *)set;
	str1 = (char *)s1;
	while (str1[i] != '\0')
		i++;
	while (sep[j] != '\0')
		j++;
	return (i - (j * 2));
}

static char		*new_str(size_t tam)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * tam);
	if (!new_str)
		return (NULL);
	return (new_str);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	h;
	char	*str1;
	char	*sep;
	char	*new_s;
	
	str1 = (char *)s1;
	sep = (char *)set;
	i = 0;
	new_s = new_str(t_len(str1, sep) + 1);
	j = 0;
	while (sep[j] != '\0')
	{
		i++;
		j++;
	}
	h = 0;
	while (i < (t_len(str1, sep) + 1))
		new_s[h++] = str1[i++];
	new_s[i] = '\0';
	return (new_s);
}

/*int		main()
{
	char	s1[] = {" ola caralho! "};
	char	sep[] = { " " };
	char	*new;

	new = ft_strtrim(s1, sep);
	printf("nova string: %s\n", new);
	free(new);
	return (0);
}*/