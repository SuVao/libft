/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:27:30 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/13 13:27:30 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_dig(long n)
{
	int		count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	if (n < 10)
	{
		n = n % 10;
		count++;
	}
	return (count);
}

static char	*convert(long nb, char *str, int count)
{
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[count - 1] = (nb % 10) + '0';
		nb /= 10;
		count--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	str = (char *)malloc(sizeof(char) * (count_dig(n) + 1));
	if (!str)
		return (0);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	i = count_dig(n);
	str = convert(n, str, i);
	str[i] = '\0';
	return (str);
}

// int		main()
// {
// 	char	*str;

// 	str = ft_itoa(0);
// 	printf("nbr = %s \n", str);
// 	return (0);
// }