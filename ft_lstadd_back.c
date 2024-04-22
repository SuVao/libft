/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:05:17 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/22 17:38:10 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = (t_list *)malloc(sizeof(t_list));
	if (!last)
		return ;
	if (lst && *lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
		new->next = NULL;
	}
	else
		*lst = new;
	return ;
}

// int main()
// {
// 	t_list *lst;
// 	t_list *lst2;
// 	t_list *lst3;
// 	t_list *lst4;
// 	lst = ft_lstnew("pedro");
// 	lst2 = ft_lstnew("caralho");
// 	lst3 = ft_lstnew("puta");
// 	lst4 = ft_lstnew("merda");
// 	ft_lstadd_back(&lst, lst2);
// 	printf("last: %s\n", (char *)lst->content);
// 	ft_lstadd_back(&lst, lst3);
// 	printf("last: %s\n", (char *)lst->content);
// 	ft_lstadd_back(&lst, lst4);
// 	printf("last: %s\n", (char *)lst->content);
// 	return (0);
// }