#include "memlist.h"

static void	lst_remove(t_list **lst, void *data, void (*del)(void *))
{
	t_list	*prev;
	t_list	*cur;

	prev = *lst;
	if (prev->content == data)
	{
		*lst = prev->next;
		ft_lstdelone(prev, del);
		return ;
	}
	cur = prev->next;
	while (cur)
	{
		if (cur->content == data)
		{
			prev->next = cur->next;
			ft_lstdelone(cur, del);
			return ;
		}
		prev = cur;
		cur = cur->next;
	}
}

/**
 * @brief Removes a single memory segment from the memlist
 *
 * @param mem Address of the memory segment to remove
 */
void	release(void *mem)
{
	t_list	**memlist;

	memlist = get_memlist();
	if (!memlist)
		return ;
	lst_remove(memlist, mem, &free);
}
