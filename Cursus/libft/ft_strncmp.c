/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:40:06 by evasco-o          #+#    #+#             */
/*   Updated: 2023/09/28 16:39:17 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	if (len == 0)
		return (0);
	while (*s1 != 0 && (unsigned char)*s1 == (unsigned char)*s2 && len-- > 1)
	{
		s1++;
		s2++;
	}
	if ((unsigned char)*s1 == (unsigned char)*s2)
		return (0);
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}

// i-- operacion de decremento postfijo

/*int main(int argc, char **argv)
{
    if (argc >= 3)
    {
        printf("%d", ft_strncmp(argv[1], argv[2], ((int)argv[3])));
		\\¿Está bien si lo paso a integer?

        return (0);
    }
    else
    {
        return (1);
    }
}*/
