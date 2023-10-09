/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:16:03 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/09 12:06:14 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;

	i = 0;
	d_len = ft_strlen(dst);
	if (dstsize > 0)
	{
		while (src[i])
		{
			dst[d_len + i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (d_len);
}

/*int main()
{
    char *src = "world!";
    char dst[20] = "Hello";

    size_t cat = ft_strlcat(dst, src, sizeof(dst));

    printf("%zu\n", cat); //especificador de formato para size_t
    printf("%s\n", src);
}*/
