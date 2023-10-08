/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:41:05 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/03 10:52:32 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Allocates sufficient memory for a copy of the s1, does the cpy, and returns
// a pointer to it. The pointer may subsequently be used as an argument to the
// funtion free.
// If insufficient memory available, NULL returned and errno set to ENOMEM

char	*ft_strdup(const char *s)
{
    int     len;
    int     i;
    char    *ptr;

    len = ft_strlen(s) + 1;
    ptr = (char *)malloc(len * sizeof(*ptr));
    if (ptr == NULL)
        return (NULL);
    i = 0;
    while (i < len)
    {
        ptr[i] = (char)s[i];
        i++;
    }
    return (ptr);
}
