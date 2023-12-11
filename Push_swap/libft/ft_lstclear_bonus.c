/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 18:24:42 by fprevot           #+#    #+#             */
/*   Updated: 2023/12/09 18:40:04 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;
	t_list	*next;

	if (*lst && lst)
	{
		tmp = *lst;
		while (tmp)
		{
			next = tmp->next;
			free(tmp);
			tmp = next;
		}
		*lst = NULL;
	}
}
