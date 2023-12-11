/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fprevot <fprevot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 22:31:42 by fprevot           #+#    #+#             */
/*   Updated: 2023/12/08 14:14:50 by fprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *nptr)
{
	int		sign;
	long		result;

	result = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	if (*nptr == 45 || *nptr == 43)
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if ((result > (INT_MAX - (*nptr - '0')) / 10) || \
			(-result < (INT_MIN + (*nptr - '0')) / 10))
		{
			if (sign == 1)
				return (LONG_MAX);
			else
				return (LONG_MAX);
		}
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
