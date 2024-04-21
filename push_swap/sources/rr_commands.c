/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_commands.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:11:38 by alyazici          #+#    #+#             */
/*   Updated: 2022/08/28 17:11:39 by alyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	rr_helper(int *lst, int len)
{
	int	i;

	if (len < 1)
		return ;
	i = 1;
	while (i < len)
	{
		swap(lst + i, lst + (i - 1));
		i++;
	}
}

void	rra(t_stack *stack)
{
	ft_printf("rra\n");
	rr_helper(stack->a, stack->a_len);
}

void	rrb(t_stack *stack)
{
	ft_printf("rrb\n");
	rr_helper(stack->b, stack->b_len);
}

void	rrr(t_stack *stack)
{
	ft_printf("rrr\n");
	rr_helper(stack->b, stack->b_len);
	rr_helper(stack->a, stack->a_len);
}
