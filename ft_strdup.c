/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruicarva <ruicarva@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:31:13 by ruicarva          #+#    #+#             */
/*   Updated: 2026/11/06 12:47:07 by ruicarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str_copy;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	str_copy = malloc(sizeof(char) * (len + 1));
	if (!str_copy)
		return (NULL);
	while (s[i])
	{
		str_copy[i] = s[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
}
