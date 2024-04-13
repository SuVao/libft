/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:17:18 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/13 15:59:34 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// int main()
// {
// 	t_list *lst;
// 	t_list *lst2;
// 	int		i;

// 	lst2 = ft_lstnew("ola");
// 	lst = ft_lstnew("ola");

// 	i = ft_lstsize(lst) + ft_lstsize(lst2);
// 	printf("i: %d\n", i);
// 	return (0);
// }