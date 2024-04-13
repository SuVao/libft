/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:18:45 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 23:18:45 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		printf("\nchar: %c\n", s[i]);
		i++;
	}
}

// void ft_putchar(unsigned int i, char *c)
// {
//     printf("Character at index %u: %c\n", i, *c);
// }

// int main(void)
// {
// 	char *str = "Hello";
// 	ft_striteri(str, &ft_putchar);
// 	return (0);
// }