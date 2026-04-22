/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkhan <alkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:33:45 by alkhan            #+#    #+#             */
/*   Updated: 2026/04/21 15:16:50 by alkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*selection_sort(t_list *stack_a, t_list *stack_b)
{
	int	len;
	int	pos_min;

	while (ft_lstsize(stack_a) != 0)
	{
		len = ft_lstsize(stack_a);
		pos_min = find_min_position(stack_a);
		if ((len / 2) <= pos_min)
		{
			while (pos_min != 0)
			{
				ra(stack_a);
				pos_min--;
			}
		}
		else
		{
			while (pos_min != 0)
			{
				rra(stack_a);
				pos_min++;
				if (pos_min == len)
					pos_min = 0;
			}
		}
		if (pos_min == 0)
			pb(stack_a, stack_b);
	}
	len = ft_lstsize(stack_b);
	while (len != 0)
	{
		pa(stack_b, stack_a);
		len--;
	}
	return (stack_a);
}

t_list	*bubble_sort(t_list *stack_a, t_list *stack_b)
{
	int	position;

	if ((stack_a->value) > (stack_a->next->value))
	{
		pa(stack_a, stack_b);
		ra(stack_a, position);
	}
}
t_list	*insertion_sort(t_list *stack_a, t_list *stack_b)
{
	int	temp;
	int	end;

	end = ft_lstsize(stack_a);
	while (stack_a)
	{
		stack_a = stack_a->next;
		if (stack_a->next->value < stack_a->prev->value)
			stack_a = stack_a->next;
	}
}

t_list	*turk_sort(t_list *stack_a, t_list *stack_b)
{
	if (is_stack_sorted(stack_a) == 1)
		return (stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if (stack_b->value < stack_b->next->value)
		ra(stack_b);
	if (stack_a->value > stack_b->value)
		pa(stack_a, stack_b);
	// else
	// 	while (s)
}