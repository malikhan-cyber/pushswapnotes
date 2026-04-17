#ifndef LIBFT_H
# define LIBFT_H
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

int					find_min_value(t_list *stack_a);
int					find_min_position(t_list *stack_a);

#endif