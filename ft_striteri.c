/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:30:27 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/15 17:46:20 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void print_index(unsigned int i, char *c)
// {
// 	printf("Index: %d, Char: %c\n", i, *c);
// }

// int main()
// {
// 	char	str[] = "ola caralho";

// 	ft_striteri(str, print_index);
// 	return (0);
// }