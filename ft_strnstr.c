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
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len) //Pq no encapsulamos i<len??
	{
		j = 0;
		while (haystack[i +j] && haystack[i+j] == needle[j] && i + j < len) //Pq no encapsulamos i + j < len??
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

int	main()
{
	char	*string = "hola, qué tal estás?";
	char	*search = "tal";

	
}