#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	if (new)
		new->next = NULL;
	if (!(*alst))
		*alst = new;
	else
		ft_lstlast(*alst)->next = new;
}