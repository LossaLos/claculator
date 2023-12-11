/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_met.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:32:33 by fprevot           #+#    #+#             */
/*   Updated: 2023/12/09 19:20:02 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_list **stack_a)
{
    if (*stack_a == NULL || (*stack_a)->next == NULL) 
    {
        return;
    }
    t_list *first = *stack_a;
    t_list *second = (*stack_a)->next;

    *stack_a = second;
    first->next = second->next;
    second->next = first;
    printf("sa\n");
}

void push_a(t_list **stack_a, t_list **stack_b) 
{
    t_list *tmp;

    if (*stack_b == NULL)
        return;
    tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = *stack_a;
    *stack_a = tmp;
    printf("pa\n");
}

void push_b(t_list **stack_a, t_list **stack_b) 
{
    t_list *tmp;

    if (*stack_a == NULL) 
        return;
    tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = *stack_b;
    *stack_b = tmp;
    printf("pb\n");
}


void    rotate_a(t_list **stack_a)
{
    t_list *first;
    t_list *last;
    
    last = (*stack_a);
    first = (*stack_a);
    while (last->next != NULL)
        last = last->next;
    *stack_a = first->next;
    first->next = NULL;
    last->next = first;
    printf("ra\n");
}

void    reverse_rotate_a(t_list **stack_a)
{
    t_list *penultimate = NULL; 
    t_list *last = *stack_a;
    while (last->next != NULL)
    {
        penultimate = last;
        last = last->next;
    }
    penultimate->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
    printf("rra\n");
}