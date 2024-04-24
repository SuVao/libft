/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesilva- <pesilva-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:03:18 by pesilva-          #+#    #+#             */
/*   Updated: 2024/04/24 13:03:20 by pesilva-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_elem;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_elem);
		lst = lst->next;
	}
	return (new_lst);
}

// void *ft_rot32(void *content)
// {
// 	char *str;
// 	int i;

// 	str = (char *)content;NULL;
// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] >= 'a' && str[i] <= 'z')
// 			str[i] -= 32;
// 		else if (str[i] >= 'A' && str[i] <= 'Z')
// 			str[i] += 32;
// 		i++;
// 	}
// 	return (content);
// }

// int main()
// {
// 	t_list *list;
// 	t_list *new_list;
// 	t_list *tmp;

// 	list = ft_lstnew(ft_strdup("Hello"));
// 	list->next = ft_lstnew(ft_strdup("World"));
// 	list->next->next = ft_lstnew(ft_strdup("42"));
// 	list->next->next->next = ft_lstnew(ft_strdup("Lisboa"));
// 	new_list = ft_lstmap(list, ft_rot32, free);
// 	tmp = new_list;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	return (0);
// }
