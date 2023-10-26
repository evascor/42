/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:36:32 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/11 15:18:03 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Copies n bytes from memory area src to memory area dst
// If dst and src overlap, behavior undefined
// If dst and src might overlap should use memmove instead
// RETURN - Original value of dst

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

/*int	main()
{
	char	dst[] = "Hola";
	char	src[] = "Bye";

	printf("%s\n", ft_memcpy(dst, src, 3));
	return (0);
}*/
