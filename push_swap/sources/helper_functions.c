/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_functions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:09:42 by alyazici          #+#    #+#             */
/*   Updated: 2022/08/28 17:09:43 by alyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	top_a(t_stack *stack)
{
	return (stack->a[stack->a_len - 1]);
}

int	top_b(t_stack *stack)
{
	return (stack->b[stack->b_len - 1]);
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
