/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:25:54 by pleander          #+#    #+#             */
/*   Updated: 2024/07/13 10:50:17 by pleander         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*cur;

	cur = lst;
	i = 0;
	while (cur)
	{
		i++;
		cur = cur->next;
	}
	return (i);
}
