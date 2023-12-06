#ifndef STACK_H
# define STACK_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdbool.h>

/// This should be deleted//
# include <stdio.h>
////////////////////////////

typedef struct a_list
{
	int				nb;
	int				position;
	int				range;
	int				sort;
	struct a_list	*next;
}	t_stack;

typedef struct i_list
{
	int				i;
	struct i_list	*next;
}	t_index;

typedef struct l_list
{
	int		pivot;
	int		max_range;
	int		size;
	int		pivot_1;
	int		pivot_2;
	t_stack	*a;
	t_stack	*b;
	t_stack	*tmp;
	t_index	*index;
}	t_list;

/*Operation*/
void	do_pa(t_list *stack);
void	do_pb(t_list *stack);
void	do_sa(t_list *stack);
void	do_sb(t_list *stack);
void	do_ss(t_list *stack);
void	do_ra(t_list *stack);
void	do_rb(t_list *stack);
void	do_rr(t_list *stack);
void	do_rra(t_list *stack);
void	do_rrb(t_list *stack);
void	do_rrr(t_list *stack);

/*Create Stack*/
t_list	*init_stack(t_list *stack, int argc, char **argv);
t_list	*create_stack(int argc, char *first_input_arg);
int		parse_number(char *str, t_list *stack);
void	mem_alloc(int nb, t_list *stack);
void	initialize_index(t_list *stack);

/*Free error*/
void	check_duplicate(int nb, t_list *stack);
void	error_exit(t_list *stack);
void	free_stack_ab(t_list *stack);
void	free_index_ab(t_list *stack);

/*Utillitys*/
int		stack_size(t_list *stack, char name);
int		last_num(t_stack *stack);

#endif
