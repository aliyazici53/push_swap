/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:10:04 by alyazici          #+#    #+#             */
/*   Updated: 2022/08/28 17:10:04 by alyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	pb(t_stack *stack)
{
	if (stack->a_len > 0)
	{
		stack->b[stack->b_len++] = stack->a[--stack->a_len];
		ft_printf("pb\n");
	}
}

void	pa(t_stack *stack)
{
	if (stack->b_len > 0)
	{
		stack->a[stack->a_len++] = stack->b[--stack->b_len];
		ft_printf("pa\n");
	}
}
