/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:45:49 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/19 20:06:07 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (b);
}

// int	main(void)
// {
// 	char str[10] = "123456789";
// 	char str2[10] = "123456789";

// 	ft_memset(str, 'a', 5);
// 	memset(str2, 'a', 5);
// 	printf("ft_memset: %s\n", str);
// 	printf("memset: %s\n", str2);

// 	ft_memset(str, 'a', 10);
// 	memset(str2, 'a', 10);
// 	printf("ft_memset: %s\n", str);
// 	printf("memset: %s\n", str2);

// 	ft_memset(str, 90, 5);
// 	memset(str2, 90, 5);
// 	printf("ft_memset: %s\n", str);
// 	printf("memset: %s\n", str2);

// 	ft_memset(str, 2147483647, 5);
// 	memset(str2, 2147483647, 5);
// 	printf("ft_memset: %s\n", str);
// 	printf("memset: %s\n", str2);

// 	ft_memset(str, -2147483648, 5);
// 	memset(str2, -2147483648, 5);
// 	printf("ft_memset: %s\n", str);
// 	printf("memset: %s\n", str2);
// }