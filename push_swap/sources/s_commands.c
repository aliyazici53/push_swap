/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:11:42 by alyazici          #+#    #+#             */
/*   Updated: 2022/08/28 17:11:43 by alyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	s_helper(int *lst, int len)
{
	if (len >= 2)
		swap(lst + len - 1, lst + len - 2);
}

void	sa(t_stack *stack)
{
	if (stack->a_len >= 2)
	{
		s_helper(stack->a, stack->a_len);
		ft_printf("sa\n");
	}
}

void	sb(t_stack *stack)
{
	if (stack->b_len >= 2)
	{
		s_helper(stack->b, stack->b_len);
		ft_printf("sb\n");
	}
}

void	ss(t_stack *stack)
{
	s_helper(stack->b, stack->b_len);
	s_helper(stack->a, stack->a_len);
	ft_printf("ss\n");
}
