/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:30:27 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/02 16:32:40 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

// Writes len bytes of value (unsigned char)c to the string b

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	c = (unsigned char)c;
	while(++i < len)
		(((unsigned char *)b)[i] = c);
	return (b);
}

/*int	main(int argc, char **argv)
{
	if (argc != 4)
		return (1);

	char	*string = argv[1];
	int		c = ft_atoi(argv[2]);
	size_t	len = ft_atoi(argv[3]);
	printf("%s", ft_memset(string, c, len));
}*/
