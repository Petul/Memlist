/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:53:05 by pleander          #+#    #+#             */
/*   Updated: 2024/07/13 10:46:16 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = n;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = n;
}
