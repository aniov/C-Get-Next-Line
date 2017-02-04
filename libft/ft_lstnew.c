/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoina <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/31 16:39:02 by mvoina            #+#    #+#             */
/*   Updated: 2015/11/15 13:59:47 by mvoina           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *node;

	if ((node = (t_list*)malloc(sizeof(t_list))) == 0)
		return (0);
	if (content == 0)
	{
		node->content = 0;
		node->content_size = 0;
	}
	else
	{
		if ((node->content = (void*)malloc(sizeof(content_size))) == 0)
			return (0);
		ft_memcpy(node->content, content, content_size);
		node->content_size = content_size;
	}
	node->next = 0;
	return (node);
}
