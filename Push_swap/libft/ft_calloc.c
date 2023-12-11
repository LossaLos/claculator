/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:37:34 by fprevot           #+#    #+#             */
/*   Updated: 2023/11/18 13:01:59 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	max;
	void	*target;

	max = (size_t) - 1;
	if (size > 0 && nmemb > max / size)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		target = malloc (0);
	}
	else
		target = malloc (nmemb * size);
	if (target == NULL)
	{
		return (NULL);
	}
	ft_bzero (target, nmemb * size);
	return (target);
}
