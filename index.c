#include "push_swap.h"
#include <stdlib.h>

void	bubble_sort(int *arr, int len)
{
	int		i;
	int		j;
	int		tmp;

	j = 0;
	while (j < len)
	{
		i = j + 1;
		while (i < len)
		{
			if (arr[j] > arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			i++;
		}
		j++;
	}
}

void	fill_stack_to_array(t_list *stack, int *arr)
{
	t_list	*head;
	int		i;

	i = 0;
	head = stack;
	while (head != NULL)
	{
		arr[i] = head->value;
		head = head->next;
		i++;
	}
}

void	get_index(t_list *stack, int *arr, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		if (stack->value == arr[i])
			stack->index = i;
		i++;
	}
}

void	index_stack(t_list **stack)
{
	int		len;
	int		*arr;
	t_list	*head;

	head = *stack;
	len = ft_lstsize(head);
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return ;
	fill_stack_to_array(head, arr);
	bubble_sort(arr, len);
	while (head != NULL)
	{
		get_index(head, arr, len);
		head = head->next;
	}
	free(arr);
}
