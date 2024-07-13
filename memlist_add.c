#include "memlist.h"

/**
 * @brief Adds a manually allocated memory segment to the memlist
 *
 * @param mem Pointer to manually allocated memory segment
 */
void	memlist_add(void *mem)
{
	t_list	**memlist;
	t_list	*n;

	memlist = get_memlist();
	if (!memlist)
		return ;
	n = ft_lstnew(mem);
	if (!n)
		return ;
	ft_lstadd_front(memlist, n);
}
