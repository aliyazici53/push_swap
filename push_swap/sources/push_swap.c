/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:10:10 by alyazici          #+#    #+#             */
/*   Updated: 2022/08/28 17:27:54 by alyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	controller(t_stack *stack)
{
	if (!check_dup(stack->a, stack->a_len))
	{
		if (!is_sorted_reverse(stack->a, stack->a_len))
		{
			if (stack->a_len == 2 && stack->a[1] > stack->a[0])
				sa(stack);
			else if (stack->a_len == 3)
				sort_three(stack);
			else if (stack->a_len <= 5)
				sort_small(stack);
			else
				sort(stack);
		}
	}
	else
		error(stack);
}

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		counter;
	char	*res;

	if (argc < 2)
		exit(1);
	res = take_args(argc, argv);
	counter = args_count(res);
	stack = ft_create_stack(counter);
	init_stack(stack, res);
	controller(stack);
	free_stack(stack);
	return (0);
}
