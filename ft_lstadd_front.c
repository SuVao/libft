/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:53:33 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/17 15:34:37 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list	*new;
// 	t_list	*lst;

// 	new = ft_lstnew("Hello, World!");
// 	lst = ft_lstnew("Goodbye, World!");
// 	ft_lstadd_front(&lst, new);
// 	printf("lst->content: %s\n", (char *)lst->content);
// 	printf("lst->next->content: %s\n", (char *)lst->next->content);
// 	return (0);
// }