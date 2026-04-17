/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkhan <alkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 10:08:18 by alkhan            #+#    #+#             */
/*   Updated: 2026/04/17 12:26:34 by alkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

int	find_min_value(t_list *stack_a)
{
	int min_value;
	
	min_value = stack_a->value;
	while(stack_a)
	{
		if(stack_a->value < min_value)
			min_value = stack_a->value;
		stack_a = stack_a->next;  
	}
	return(min_value);
}

int	find_min_position(t_list *stack_a)
{
	int min_value;
	int pos;
	
	min_value = find_min_value(stack_a);
	pos = 0;
	while(stack_a)
	{
		if(min_value == stack_a->value)
			return(pos);
		stack_a = stack_a->next;
		pos++;
	}
	return (NULL);
}