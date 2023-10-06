/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:08:08 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/04 12:08:08 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Write zeroes to a byte str

 void   ft_bzero(void *b, size_t len)
 {
    size_t  i;
    char    *str;

    i = 0;
    str = b;
    while (i < len)
    {
        str[i] = '\0';
        i++;
    }
 }