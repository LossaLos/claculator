/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:32:41 by fprevot           #+#    #+#             */
/*   Updated: 2023/12/11 11:04:04 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_stack(t_list *stack, int *argnbr) 
{
    while (stack != NULL) 
    {
        printf("%d ", stack->content);
        stack = stack->next;
        (*argnbr)++;
    }
    printf("\n");
}

void    exit_failure(t_list **stack_a)
{
    printf("Error\n");
    ft_lstclear(stack_a);
    exit(EXIT_FAILURE);
}

void    choose_sort_met(int argnbr, t_list **stack_a, t_list **stack_b)
{
    if (argnbr <= 3)
        sort_stack_of_3(stack_a, stack_b);
    else if (argnbr <= 5)
        sort_stack_of_5(stack_a, stack_b);
    else if (argnbr > 5)
        sort_stack_beyond_5(stack_a, stack_b, argnbr);
}

void print_stack2(t_list *stack) 
{
    while (stack != NULL) 
    {
        printf("%d ", stack->content);
        stack = stack->next;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    int argnbr = 0;
    if (argc <= 1)
        exit(EXIT_FAILURE);   
    size_t i = 1;
    t_list *stack_a = NULL;
    t_list *stack_b = NULL;
    
    while (i != argc) 
    {
        process_arg(argv[i], &stack_a);
        i++;
    }
    printf("base stack A:\n");
    print_stack(stack_a, &argnbr);
    
    choose_sort_met(argnbr, &stack_a, &stack_b);
    ft_lstclear(&stack_a);
    return (0);
}

