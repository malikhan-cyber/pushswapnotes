/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkhan <alkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:33:45 by alkhan            #+#    #+#             */
/*   Updated: 2026/04/17 13:56:35 by alkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* simple algorithms
bubble sort & selection sort*/

// selection sort

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

t_list	*bubble_sort(t_list stack_a, t_list stack_b)
{
	if ((lst->content) > (lst->next->content)
	{
		pa(stack_a, stack_b);
		ra(stack_a, position);
	}
}