/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruicarva <ruicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:40:48 by ruicarva          #+#    #+#             */
/*   Updated: 2026/11/09 18:06:03 by ruicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	numlen(long n)
{
	size_t	len;

	len = 1;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*result;

	nb = n;
	len = numlen(nb);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (nb == 0)
		result[0] = '0';
	if (nb < 0)
	{
		result[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		result[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (result);
}
