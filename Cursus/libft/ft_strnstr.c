/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:25:24 by evasco-o          #+#    #+#             */
/*   Updated: 2023/09/30 09:40:53 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	// Locates first occurrence of the null-terminated str needle in the str
	// haystack, where not more than len characters are searched. Characters
	// that appear after a '\0' are not searched.
	// RETURN - needle empty > haystack return
	// 			needle not found > NULL return
	// 			else > pointer fst char of fst occurrence
	int	i;
	int	j:

	i = 0;
	j = 0;

	if (needle == 0)
		return (haystack);
	while (haystack[i])
	{
		if (haystack[i] == needle [j])
			return (*haystack);
		i++;
	}


