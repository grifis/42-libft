/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:03:31 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/22 10:20:52 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_p;

	s_p = (unsigned char *)s;
	while (n--)
	{
		if (*s_p == (unsigned char)c)
			return ((void *)s_p);
		s_p++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "123456789";
// 	printf("ft_memchr:%s\n", (char *)ft_memchr(NULL, '5', 0));
// 	printf("memchr:%s\n", (char *)memchr(NULL, '5', 0));
// 	return (0);
// }
