/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 19:00:39 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/08 19:00:39 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Allocates memory for an array of nmemb elements of size bytes each and
//returns a pointer to the allocated memory. Memory set to 0.
//RETURN - pointer to the allocated memory, any kinf of variable
//       - NULL if the request fail


//nmemb - numero de elementos que se asignan en memoria
//size - tamaño de bytes de cada elemento
//*ptr - almacena la direccion de la memoria asignada
void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *ptr;

    ptr = (void *)malloc(nmemb * size);
    if (ptr ==  NULL)
        return (NULL);
    ft_bzero(ptr, nmemb * size);
    return (ptr);
}