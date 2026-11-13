/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruicarva <ruicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 16:10:43 by ruicarva          #+#    #+#             */
/*   Updated: 2026/11/06 16:38:04 by ruicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	size_t	i;
	size_t	j;

	if (ned[0] == '\0')
		return ((char *)hay);
	i = 0;
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (ned[j] != '\0' && i + j < len && hay[i + j] == ned[j])
			j++;
		if (ned[j] == '\0')
			return ((char *)&hay[i]);
		i++;
	}
	return (NULL);
}
