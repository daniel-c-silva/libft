/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruicarva <ruicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:10:51 by ruicarva          #+#    #+#             */
/*   Updated: 2026/11/05 13:12:51 by ruicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*read;
	size_t				i;

	read = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (read[i] == (unsigned char)c)
		{
			return ((void *)&read[i]);
		}
		i++;
	}
	return (NULL);
}
