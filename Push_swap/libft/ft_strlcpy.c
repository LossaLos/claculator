/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:46:26 by fprevot           #+#    #+#             */
/*   Updated: 2023/11/18 13:05:43 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = size;
	while (n > 1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	if (size > 0)
		*dst = '\0';
	while (*src != '\0')
	{
		src++;
		n--;
	}
	return (size - n);
}
