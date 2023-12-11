/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:25:00 by fprevot           #+#    #+#             */
/*   Updated: 2023/11/21 14:29:24 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkset(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	end = ft_strlen(s1);
	start = 0;
	while (ft_checkset(s1[start], (char *)set) == 1)
	{
		start++;
	}
	while (ft_checkset(s1[end - 1], (char *)set) == 1)
	{
		end--;
	}
	return (ft_substr(s1, start, end - start));
}
