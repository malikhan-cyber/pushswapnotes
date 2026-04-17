/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkhan <alkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 16:33:45 by alkhan            #+#    #+#             */
/*   Updated: 2026/04/17 10:06:04 by alkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* simple algorithms 
bubble sort & selection sort*/

//selection sort 

t_list 	*selection_sort(t_list stack_a, t_list stack_b)
{
int 	len;

len = ft_lstsize(stack_a);
while(len != 0)
{
	pos_min = find_min();
	if ((len /  2 ) <= pos_min)
		while(pos_min == head-> next)
			ra(stack_a, position);
	if ((len /  2 ) > pos_min)
		while(pos_min == head-> next)
			rra(stack_a, position);
	if pos_min == head->next;
		pa(stack_a, stack_b);
	len--;
}
len = ft_lstsize(stack_b)
while(len != 0)
{
	pb(stack_b, stack_a);
	len--;
}
return (stack_a);
}

t_list 	*bubble_sort(t_list stack_a, t_list stack_b)
{
	if ((lst->content) > (lst->next->content)
	{
		pa(stack_a, stack_b);
		ra(stack_a, position);
	}
}