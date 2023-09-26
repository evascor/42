/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:27:14 by evasco-o          #+#    #+#             */
/*   Updated: 2023/09/26 12:27:14 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

// Returns a pointer to the last occurrence of the character c in the string s

char    *ft_strrchr(const char *s, int c)
{
    int i;
    int length;

    i = 0;
    length = ft_strlen(s);
    while(length >= 0 && s[i] != c)
        i++;
    if (s[i] == c)
        return ((char *)s + i);
    else
        return (NULL);
}

// int i = 5;
// int a = ++i;
// int b = i++;
// pritnf("a: %d, b: %d, i: %d\n", a, b, i); // Output: "a: 6, b: 6, i: 7"

int main(int argc, char **argv)
{
    if (argc >= 3)
    {
        char character = argv[2][0];
        printf("%s\n", ft_strrchr(argv[1], character));
    }
    else
    {
        return (1);
    }
    return (0);
}