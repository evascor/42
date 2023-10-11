/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evasco-o <evasco-o@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 12:27:14 by evasco-o          #+#    #+#             */
/*   Updated: 2023/10/11 17:16:17 by evasco-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	str = (char *)s;
	len = ft_strlen(str);
	while (len > 0)
	{
		if (str[len] == (char)c)
			return (&str[len]);
		len--;
	}
	if (str[len] == (char)c)
		return (&str[len]);
	return (NULL);
}

// int i = 5;
// int a = ++i;
// int b = i++;
// pritnf("a: %d, b: %d, i: %d\n", a, b, i); // Output: "a: 6, b: 6, i: 7"

/*int main(int argc, char **argv)
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
}*/
