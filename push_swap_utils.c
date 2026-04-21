/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkhan <alkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 10:08:18 by alkhan            #+#    #+#             */
/*   Updated: 2026/04/21 14:09:57 by alkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min_value(t_list *stack)
{
	int	min_value;

	min_value = stack->value;
	while (stack)
	{
		if (stack->value < min_value)
			min_value = stack->value;
		stack = stack->next;
	}
	return (min_value);
}
int	find_max_value(t_list *stack)
{
	int	max_value;

	max_value = stack->value;
	while (stack)
	{
		if (stack->value > max_value)
			max_value = stack->value;
		stack = stack->next;
	}
	return (max_value);
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
int	find_max_position(t_list *stack_a)
{
	int max_value;
	int pos;

	max_value = find_max_value(stack_a);
	pos = 0;
	while (stack_a)
	{
		if (max_value == stack_a->value)
			return (pos);
		stack_a = stack_a->next;
		pos++;
	}
	return (-1);
}
int	*make_array(t_list *stack_a)
{
	int	len;
	int *list;
	int i;

	i = 0;
	len = ft_lstsize(stack_a);
	list = malloc(len * sizeof(int));
	if(!list)
		return (NULL);
	while(stack_a)
	{
		list[i] = stack_a->value;
		i++;
		stack_a = stack_a->next;
	}
	return(list);
}
int partition(int *list, int low, int high)
{
	int pivot;
	
	pivot = list[high];
	
	return(high);
}
int find_ideal_pivot(t_list *stack)
{
	int list_size;
	int last;
	int first;
	int middle;
	int count;
	int result;
	t_list *head;
	
	head = stack;
	count = 0;
	list_size = ft_listsize(stack);
	first = stack->value;
	while(count != list_size)
		{
			if(count == list_size-1)
				last = stack->value;
			stack = stack->next;
			count++;
		}
	count = 0;
	stack = head;
	while(count != (list_size / 2))
		{
			if(count == (list_size / 2) - 1)
				middle = stack->value;
			count++;
			stack = stack->next;
		}
	result = ft_median_pivot(first, middle, last);
	return(result);
}

int	ft_median_pivot(int first, int middle, int last)
{
	int	result;
	
	if (middle > first && middle < last || middle > last && middle < first )
		result = middle;
	else if (first > middle && first < last || first > last && first < middle )
		result = first;
	else 
		result = last;
	return(result);
}

int *ft_quicksort(int *list, int low, int high)
{
	
}
int *sorted_array(int *list, int len)
{
    quicksort(list, 0, len - 1);
    return list;
}
int is_stack_sorted(t_list *stack)
{
	while(stack && stack->value < stack->next->value)
			stack = stack->next;
	if (!(stack->value < stack->next->value))
		return(-1);
	return(1);
}
