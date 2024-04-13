/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:28:42 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/13 13:28:42 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (0);
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	tuppercase(unsigned int d, char c)
{
	if (d % 2 == 0)
	{
		if (c >= 'a' && c <= 'z')
		return (c - 32);
	}
	return (c);
}

int main()
{
	char	*str;

	str = ft_strmapi("ola caralho", tuppercase);
	printf("string apos a funcao: %s", str);
	free(str);
	return (0);
}