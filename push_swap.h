/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahyilmaz <ahyilmaz@student.42.tr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:33:22 by acepni            #+#    #+#             */
/*   Updated: 2023/07/31 17:12:50 by ahyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

void	init_stack(t_list **stack, int argc, char **argv);

t_list	*ft_lstnew(int value);
t_list	*ft_lstlast(t_list *head);
void	ft_lstadd_back(t_list **stack, t_list *new);
int		ft_lstsize(t_list *head);

void	ft_error(char *msg);
void	ft_check_args(int argc, char **argv);
int		is_sorted(t_list *stack);
int		get_distance(t_list **stack, int index);
void	free_stack(t_list **stack);
void	ft_free(char **str);

void	radix_sort(t_list **stack_a, t_list **stack_b, int size, int i);
void	index_stack(t_list **stack);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_3(t_list **stack_a);

int		swap(t_list **stack);
int		push(t_list **stack_to, t_list **stack_from);
int		rotate(t_list **stack);
int		reverse_rotate(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

void	ft_putstr(char *str);
long	ft_atoi(char *str);
char	**ft_split(char *str, char c);
int		ft_isdigit(char c);

#endif
