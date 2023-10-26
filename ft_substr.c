/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 23:56:23 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/08 23:56:23 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *str;
    size_t  i;
    size_t  j;
    size_t  size;

    if (start >= (unsigned int)ft_strlen(s))
        return (ft_strdup(""));
    size = ft_strlen(s + start);
    if (len > size)
        len = size;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);
    i = 0;
    while (s[i] && i < start)
        i++;
    j = 0;
    while (s[i + j] && j < len)
    {
        str[j] = s[i + j];
        j++;
    }
    str[j] = '\0';
    return (str);
}