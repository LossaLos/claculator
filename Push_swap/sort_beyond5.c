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
}
*/




void    sort_stack_beyond_5(t_list **stack_a, t_list **stack_b, int stack_size)
{
    //divide_stack(stack_a, stack_b, pivot, stack_size);
   

    printf("stack A : ");
    print_stack2(*stack_a);
    printf("stack B : ");
    print_stack2(*stack_b);
}











/*
static int	get_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

	head = *stack;
	max = head->content;
	max_bits = 0;
	while (head)
	{
		if (head->content > max)
			max = head->content;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	sort_stack_beyond_5(t_list **stack_a, t_list **stack_b)
{
	t_list	*head_a;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	head_a = *stack_a;
	size = ft_lstsize(head_a);
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((head_a->content >> i) & 1) == 1)
				rotate_a(stack_a);
			else
				push_b(stack_a, stack_b);
		}
		while (ft_lstsize(*stack_b) != 0)
			push_a(stack_a, stack_b);
		i++;
	}
    printf("stack A : ");
    print_stack2(*stack_a);
}*/