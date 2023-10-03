/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:53:31 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/03 15:50:26 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Compares byte s1 against byte s2. Both assumed to bbe n bytes long
// RETURN - Identical = 0
// 			Difference between the first two diff bytes (as unsigned char)
// 			Zero-length str always identical

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (str1[i] != str2[i])
			break;
		i++;
	}
	return (str1[i] - str2[i]);
}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
}
