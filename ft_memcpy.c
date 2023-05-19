/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:17:42 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/19 20:28:11 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (dst == NULL && src == NULL)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}

// int	main(void)
// {
// 	char str[10] = "123456789";
// 	char str2[10] = "123456789";

// 	ft_memcpy(NULL, NULL, 5);
// 	memcpy(NULL, NULL, 5);
// 	printf("ft_memcpy: %s\n", str);
// 	printf("memcpy: %s\n", str2);

// 	ft_memcpy(str, "fgh", 0);
// 	memcpy(str2, "fgh", 0);
// 	printf("ft_memcpy: %s\n", str);
// 	printf("memcpy: %s\n", str2);
// }