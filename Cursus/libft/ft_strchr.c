/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:17:11 by evasco-o          #+#    #+#             */
/*   Updated: 2023/09/25 14:17:11 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

// Returns a pointer to the first occurrence of the character c in the string s

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    while(s[i] && s[i] != c)
        i++;
    if (s[i] == c)
        return ((char *)s + i);
    else
        return (NULL);
}

int main(int argc, char **argv)
{
    if (argc >= 3)
    {
        char character = argv[2][0];
        char *result = ft_strchr(argv[1], character);
        if (result)
            printf("%s\n", result);
        else
            printf("%s\n", "NULL");
        return 0;
    }
}