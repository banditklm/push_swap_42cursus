/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kelmounj <kelmounj@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:53:10 by kelmounj          #+#    #+#             */
/*   Updated: 2024/05/11 01:50:20 by kelmounj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a, t_bool bool)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (ft_lstsize(*stack_a) >= 2)
	{
		tmp = *stack_a;
		tmp2 = (*stack_a)->next;
		*stack_a = tmp2;
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
		tmp->next = NULL;
	}
	if (bool)
		write (1, "ra\n", 3);
}

void	rb(t_stack **stack_b, t_bool bool)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (ft_lstsize(*stack_b) >= 2)
	{
		tmp = *stack_b;
		tmp2 = (*stack_b)->next;
		*stack_b = tmp2;
		while (tmp2->next)
			tmp2 = tmp2->next;
		tmp2->next = tmp;
		tmp->next = NULL;
	}
	if (bool)
		write (1, "rb\n", 3);
}

void	rr(t_stack **stack_b, t_stack **stack_a)
{
	ra(stack_a, FALSE);
	rb(stack_b, FALSE);
	write (1, "rr\n", 3);
}
