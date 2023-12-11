/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:26:37 by fprevot           #+#    #+#             */
/*   Updated: 2023/11/19 14:06:23 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t n)
{
	size_t			i;
	char			*dest;
	const char		*sourc;

	if ((char *)from == NULL && (char *)to == NULL)
	{
		return (NULL);
	}
	dest = (char *)to;
	sourc = (char *)from;
	i = 0;
	while (i < n)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (to);
}
