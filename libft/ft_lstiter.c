#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	if (lst != NULL)
	{
		temp = lst;
		while (temp)
		{
			(*f)(temp->content);
			temp = temp->next;
			if (temp == NULL)
				return ;
		}
	}
}
