/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkhan <alkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 10:08:18 by alkhan            #+#    #+#             */
/*   Updated: 2026/04/17 12:36:09 by alkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_value(t_list *stack_a)
{
	int	min_value;

	min_value = stack_a->value;
	while (stack_a)
	{
		if (stack_a->value < min_value)
			min_value = stack_a->value;
		stack_a = stack_a->next;
	}
	return (min_value);
}

int	find_min_position(t_list *stack_a)
{
	int min_value;
	int pos;

	min_value = find_min_value(stack_a);
	pos = 0;
	while (stack_a)
	{
		if (min_value == stack_a->value)
			return (pos);
		stack_a = stack_a->next;
		pos++;
	}
	return (-1);
}