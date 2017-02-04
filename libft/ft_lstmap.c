/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 13:58:43 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_new(void const *content, size_t content_size)
{
	t_list *node;

	if ((node = (t_list*)malloc(sizeof(t_list))) == 0)
		return (0);
	if (content != 0)
	{
		if ((node->content = (void*)malloc(sizeof(content_size))) == 0)
			return (0);
		ft_memcpy(node->content, content, content_size);
	}
	node->content_size = content_size;
	node->next = 0;
	return (node);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *n_lst;
	t_list *head;
	t_list *temp;
	t_list *t;

	if (lst == 0 || f == 0)
		return (0);
	t = (*f)(lst);
	if ((head = ft_new(t->content, t->content_size)) == 0)
		return (0);
	temp = head;
	lst = lst->next;
	while (lst != 0)
	{
		t = (*f)(lst);
		if ((n_lst = ft_new(t->content, t->content_size)) == 0)
			return (0);
		temp->next = n_lst;
		temp = n_lst;
		n_lst->next = 0;
		lst = lst->next;
	}
	return (head);
}
