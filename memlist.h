#ifndef MEMLIST_H
# define MEMLIST_H

# include "list/list.h"

t_list	**get_memlist(void);
void	release_all(void);
void	*reserve(size_t bytes);
void	release(void *mem);

#endif
