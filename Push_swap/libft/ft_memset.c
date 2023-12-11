/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:39:33 by fprevot           #+#    #+#             */
/*   Updated: 2023/11/18 13:04:47 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int i, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (n > 0)
	{
		*p = (unsigned char)i;
		p++;
		n--;
	}
	return (ptr);
}
