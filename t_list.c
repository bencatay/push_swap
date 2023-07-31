#include "push_swap.h"
#include <stdlib.h>

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *head)
{
	t_list	*tmp;

	if (!head)
		return (NULL);
	tmp = head;
	while (tmp && tmp->next)
		tmp = tmp->next;
	return (tmp);
}

void	ft_lstadd_back(t_list **stack, t_list *new)
{
	t_list	*n;

	if (*stack)
	{
		n = ft_lstlast(*stack);
		n->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}

int	ft_lstsize(t_list *head)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = head;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
