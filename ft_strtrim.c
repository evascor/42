/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 03:21:08 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/09 03:21:08 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char    *new;
    size_t  start;
    size_t  len;

    start = 0;
    len = 0;
    if (ft_strlen(s1) > 0)
        len = ft_strlen(s1) - 1;
    while (s1[start] && ft_strchr(set, s1[start]))
        start++;
    while (s1[len] && ft_strchr(set, s1[len]))
        len--;
    new = ft_substr(s1, start, len - start + 1);
    return (new);
}