/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruicarva <ruicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:58:58 by ruicarva          #+#    #+#             */
/*   Updated: 2026/11/09 18:15:30 by ruicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*box;
	void	*content;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst != NULL)
	{
		content = f(lst->content);
		box = ft_lstnew(content);
		if (!box)
		{
			del(content);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, box);
		lst = lst->next;
	}
	return (head);
}
