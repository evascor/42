/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:22:32 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/11 16:00:15 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Copies len bytes from string src to string dst. The two strings may overlap
// the copy is always done in a non-destructive manner

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (d == NULL && s == NULL)
		return (NULL);
	if (s < d)
	{
		while (++i <= len)
			d[len - i] = s[len - i];
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*int	main()
{
	char	dst[] = "Hola";
	char	src[] = "Hi";

	printf("%s\n", ft_memmove(dst, src, 2));
	return (0);
}*/
