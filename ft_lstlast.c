/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:53:06 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/17 15:34:45 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next != NULL)
		last = last->next;
	return (last);
}

/*int	main()
{
	t_list *lst;
	t_list *lst2;
	t_list *lst3;
	t_list *lst4;

	lst = ft_lstnew("ola");
	lst2 = ft_lstnew("caralho");
	lst3 = ft_lstnew("puta");
	lst4 = ft_lstnew("merda");
	ft_lstlast(lst);
	printf("last: %s\n", (char *)lst->content);
	ft_lstlast(lst2);
	printf("last: %s\n", (char *)lst2->content);
	ft_lstlast(lst3);
	printf("last: %s\n", (char *)lst3->content);
	ft_lstlast(lst4);
	printf("last: %s\n", (char *)lst4->content);
	return (0);
}*/