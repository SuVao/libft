/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 22:05:17 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/14 22:06:58 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst && *lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

int main()
{
	t_list *lst;
	t_list *new;

	lst = ft_lstnew("1");
	new = ft_lstnew("2");
	ft_lstadd_back(&lst, new);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	return (0);
}