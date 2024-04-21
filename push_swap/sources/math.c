/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyazici <alyazici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:09:49 by alyazici          #+#    #+#             */
/*   Updated: 2022/08/28 17:09:50 by alyazici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	get_min(int *lst, int len)
{
	int	i;
	int	num;

	num = lst[len - 1];
	i = len;
	while (i--)
		if (num > lst[i])
			num = lst[i];
	return (get_index(lst, len, num));
}

int	get_max(int *lst, int len)
{
	int	i;
	int	num;

	num = lst[len - 1];
	i = len;
	while (i--)
		if (num < lst[i])
			num = lst[i];
	return (get_index(lst, len, num));
}

int	average(int *lst, int len)
{
	int	ret;
	int	i;

	i = 0;
	ret = 0;
	while (i < len)
		ret += lst[i++];
	return (ret / len);
}

int	is_less_than_average(int *lst, int len, int pivot)
{
	int	i;

	i = 0;
	while (i < len)
		if (lst[i++] < pivot)
			return (1);
	return (0);
}
