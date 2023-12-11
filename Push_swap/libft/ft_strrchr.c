/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:32:11 by fprevot           #+#    #+#             */
/*   Updated: 2023/11/18 13:05:01 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	char			*l;

	l = (char *)s;
	uc = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == uc)
		{
			l = (char *)s;
		}
		s++;
	}
	if (uc == '\0')
	{
		return ((char *)s);
	}
	if (*l == uc)
		return (l);
	return (NULL);
}
