/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_beyond5.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:19:04 by fprevot           #+#    #+#             */
/*   Updated: 2023/12/11 15:30:46 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int find_median(t_list **stack_a)
{
    t_list *tmp = *stack_a;
    int minval = tmp->content;
    int maxval = tmp->content;

    while (tmp->next != NULL)
    {
        if (minval > tmp->content)
            minval = tmp->content;
        if (maxval < tmp->content)
            maxval = tmp->content;
        tmp = tmp->next;
    }
    return ((maxval - minval) / 2)
}*/

/*void divide_stack(t_list **stack_a, t_list **stack_b, int pivot, int stack_size) 
{
    int num_moved = 0;

    while (num_moved < stack_size / 2) 
    {
        push_b(stack_a, stack_b);
        num_moved++;
    }
}*/




void    sort_stack_beyond_5(t_list **stack_a, t_list **stack_b, int stack_size)
{
    //divide_stack(stack_a, stack_b, pivot, stack_size);
    push_b(stack_a, stack_b);
    int pivot = (*stack_b)->content;

    quicksort(stack_a, stack_a, pivot);
    printf("stack A : ");
    print_stack2(*stack_a);
    printf("stack B : ");
    print_stack2(*stack_b);
    

}
