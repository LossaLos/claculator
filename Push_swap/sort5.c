/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 18:03:04 by fprevot           #+#    #+#             */
/*   Updated: 2023/12/11 11:20:31 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void find_smallest(t_list *stack_a, t_list **smallest, int *smallest_index)
{
    *smallest = stack_a;
    int index = 0;
    while (stack_a != NULL) {
        if (stack_a->content < (*smallest)->content) 
        {
            *smallest = stack_a;
            *smallest_index = index;
        }
        stack_a = stack_a->next;
        index++;
    }
}

void move_smallest_to_top(t_list **stack_a, t_list *smallest, int smallest_index, int stack_size) 
{
    int i = 0;
    if (smallest_index < stack_size / 2) 
    {
        while (i < smallest_index) 
        {
            rotate_a(stack_a);
            i++;
        }
    }
    else 
    {
        i = stack_size;
        while (i > smallest_index)
        {
            reverse_rotate_a(stack_a);
            i--;
        }
    }
}

void push_smallest_to_b(t_list **stack_a, t_list **stack_b)
{
    t_list *smallest = NULL;
    int smallest_index = 0;
    find_smallest(*stack_a, &smallest, &smallest_index);

    int stack_size = 0;
    t_list *temp = *stack_a;
    while (temp != NULL) 
    {
        temp = temp->next;
        stack_size++;
    }

    move_smallest_to_top(stack_a, smallest, smallest_index, stack_size);
    push_b(stack_a, stack_b);
}


int     is_sorted(t_list **stack_a)
{
    t_list *current = *stack_a;
    while (current && current->next) 
    {
        if (current->content > current->next->content)
            return (0);
        current = current->next;
    }
    return (1);
}

void    sort_stack_of_5(t_list  **stack_a, t_list **stack_b)
{
    if (is_sorted(stack_a) == 1)
        return;
    push_smallest_to_b(stack_a, stack_b);
    push_smallest_to_b(stack_a, stack_b);
    sort_stack_of_3(stack_a, stack_b);
    push_a(stack_a, stack_b);
    push_a(stack_a, stack_b);
    if ((*stack_a)->content > (*stack_a)->next->content)
        swap_a(stack_a);
}