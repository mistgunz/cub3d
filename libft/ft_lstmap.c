#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*flwr;
	t_list	*new;

	flwr = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (new == NULL)
			ft_lstclear(&flwr, del);
		ft_lstadd_back(&flwr, new);
		lst = lst->next;
	}
	return (flwr);
}
