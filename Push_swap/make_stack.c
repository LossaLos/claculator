/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:32:39 by fprevot           #+#    #+#             */
/*   Updated: 2023/12/09 18:51:59 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_diff(t_list *stack)
{
    while (stack != NULL)
    {
        int current_value = stack->content;
        t_list *temp = stack->next;
        while (temp != NULL)
        {
            int next_value = temp->content;
            if (current_value == next_value)
                return (1);
            temp = temp->next;
        }
        stack = stack->next;
    }
    return (0);
}

int check_arg(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if ((str[i] == '-' && ft_isdigit(str[i + 1]) == 0) || \
            (str[i] == '+' && ft_isdigit(str[i + 1]) == 0))
            return (1);
        if ((str[i] < '0' || str[i] > '9') && str[i] != '-' && str[i] != '+')
            return (1);
        i++;
    }
    return (0);
}

void process_arg(char *arg, t_list **stack) 
{
    long content;
    char **tab = ft_split(arg, ' ');
    int i = 0;
    t_list *tmp;

    while (tab[i] != NULL) 
    {
        if (check_arg(tab[i]) == 1)
            exit_failure(stack);
        content = ft_atoi(tab[i]);
        if (content == LONG_MAX)
            exit_failure(stack);
        tmp = ft_lstnew((int)content);
        if (!tmp)
            exit_failure(stack);
        ft_lstadd_back(stack, tmp);
        i++;
    }
    if (check_diff(*stack) == 1)
        exit_failure(stack);
}

