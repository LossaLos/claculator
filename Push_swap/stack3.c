/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:14:30 by fprevot           #+#    #+#             */
/*   Updated: 2023/12/09 17:45:18 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



void    sort_stack_of_3(t_list **stack_a, t_list **stack_b)
{
    t_list *last;
    
    last = *stack_a;
    while (last && last->next != NULL)
        last = last->next;
    if (*stack_a && (*stack_a)->next && (*stack_a)->content > (*stack_a)->next->content)
        swap_a(stack_a);
    if ((*stack_a)->next->content > last->content)
        reverse_rotate_a(stack_a);
    if ((*stack_a)->content > (*stack_a)->next->content)
        swap_a(stack_a);
}