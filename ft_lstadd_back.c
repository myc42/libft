#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstnew;

	lstnew = *lst;
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{	
		*lst = new;
		return ;
	}
	while (lstnew ->next != NULL)
	{
		lstnew = lstnew -> next;
	}
	lstnew->next = new;
}