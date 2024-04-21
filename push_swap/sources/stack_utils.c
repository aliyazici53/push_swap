/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:09:13 by alyazici          #+#    #+#             */
/*   Updated: 2022/08/28 17:09:14 by alyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

t_stack	*ft_create_stack(int size)
{
	t_stack	*stack;

	if (size < 0)
		return (NULL);
	stack = (t_stack *) malloc(sizeof(t_stack));
	stack->a = malloc(sizeof(int) * (size));
	stack->b = malloc(sizeof(int) * (size));
	stack->a_len = 0;
	stack->b_len = 0;
	return (stack);
}

void	init_stack(t_stack *stack, char *res)
{
	int		counter;
	char	**str;
	int		i;

	counter = ft_count_words(res, ' ');
	str = ft_split(res, ' ');
	if (!check_args(counter, str))
	{
		free(res);
		error(stack);
	}
	i = 0;
	while (i < counter)
	{
		stack->a[stack->a_len++] = new_atoi(str[counter - i - 1], stack);
		free(str[counter - i - 1]);
		i++;
	}
	free(res);
	free(str);
}
