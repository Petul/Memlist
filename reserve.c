#include "memlist.h"

/**
 * @brief Allocates bytes memory and adds it to the beginning of the memlist
 *
 * @param bytes number of bytes to allocate
 */
void	*reserve(size_t bytes)
{
	t_list	**memlist;
	t_list	*n;
	void	*mem;
	if (bytes < 0)
		return (NULL);

	memlist = get_memlist();
	if (!memlist)
		return (NULL);
	mem = malloc(bytes);
	if (!mem)
		return (NULL);
	n = ft_lstnew(mem);
	if (!n)
		return (NULL);
	ft_lstadd_front(memlist, n);
	return (mem);
}
