/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnanke <mnanke@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 15:36:53 by mnanke            #+#    #+#             */
/*   Updated: 2023/02/10 15:36:54 by mnanke           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list  *node_p;

	if (!*lst)
		return ;
	node_p = *lst;
	while (*node_p)
	{
		
	}
	*lst = NULL;
}