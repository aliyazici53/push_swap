/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:09:35 by alyazici          #+#    #+#             */
/*   Updated: 2022/08/28 17:09:37 by alyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	error(t_stack *stack)
{
	ft_printf("Error\n");
	free_stack(stack);
	exit(1);
}

void	free_stack(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack);
}

void	free_char(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
		free(str[i++]);
	free(str);
}
