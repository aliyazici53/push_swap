/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_commands.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:11:28 by alyazici          #+#    #+#             */
/*   Updated: 2022/08/28 17:13:35 by alyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	r_helper(int *lst, int len)
{
	int	i;

	if (len < 1)
		return ;
	i = len - 1;
	while (i > 0)
	{
		swap(lst + i, lst + (i - 1));
		i--;
	}
}

void	ra(t_stack *stack)
{
	ft_printf("ra\n");
	r_helper(stack->a, stack->a_len);
}

void	rb(t_stack *stack)
{
	ft_printf("rb\n");
	r_helper(stack->b, stack->b_len);
}

void	rr(t_stack *stack)
{
	ft_printf("rr\n");
	r_helper(stack->a, stack->a_len);
	r_helper(stack->b, stack->b_len);
}
