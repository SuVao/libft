/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 22:48:41 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/12 22:48:41 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*s1;
	int		sign;
	int		i;
	int		res;

	res = 0;
	sign = 1;
	i = 0;
	s1 = (char *)str;
	if (!s1)
		return (0);
	while (s1[i] == ' ' || (s1[i] >= 9 && s1[i] <= 13))
		i++;
	if (s1[i] == '+' || s1[i] == '-')
	{
		if (s1[i] == '-')
			sign *= -1;
		i++;
	}
	while (s1[i] >= '0' && s1[i] <= '9')
	{
		res = res * 10 + (s1[i] - '0');
		i++;
	}
	return (res * sign);
}

// int		main()
// {
// 	const char	s1[] = {"    +1234"};
// 	int		res1;
// 	int		res2;

// 	res1 = ft_atoi(s1);
// 	res2 = atoi(s1);
// 	printf("ft_atoi: %d \natoi: %d\n", res1, res2);
// 	return (0);
// }
