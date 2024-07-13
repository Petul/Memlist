/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:10:31 by pleander          #+#    #+#             */
/*   Updated: 2024/07/13 10:47:06 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"

void	ft_lstadd_front(t_list **lst, t_list *n)
{
	n->next = *lst;
	*lst = n;
}