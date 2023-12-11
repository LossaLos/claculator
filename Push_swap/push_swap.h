/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:32:36 by fprevot           #+#    #+#             */
/*   Updated: 2023/12/11 11:03:42 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "./libft/libft.h"


int main(int argc, char **argv);
void swap_a(t_list **stack_a);
void process_arg(char *arg, t_list **stack);
void print_stack(t_list *stack, int *argnbr);
void print_stack2(t_list *stack);
void    choose_sort_met(int argnbr, t_list **stack_a, t_list **stack_b);
void    sort_stack_of_3(t_list **stack_a, t_list **stack_b);
void    sort_stack_of_5(t_list **stack_a, t_list **stack_b);
void    sort_stack_beyond_5(t_list **stack_a, t_list **stack_b, int stack_size);
void    exit_failure(t_list **stack_a);
void    push_a(t_list **stack_a, t_list **stack_b);
void    push_b(t_list **stack_a, t_list **stack_b);
void    rotate_a(t_list **stack_a);
void    reverse_rotate_a(t_list **stack_a);

#endif