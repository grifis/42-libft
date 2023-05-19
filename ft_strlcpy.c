/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 19:41:44 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/19 20:27:07 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	const char	*s;

	s = src;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (--dstsize && *s)
	{
		*dst = *s;
		dst++;
		s++;
	}
	*dst = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char str[10] = "123456789";
// 	char str2[10] = "abcdju";
// 	char str3[10] = "123456789";
// 	char str4[10] = "abcdju";
// 	char str5[10] = "123456789";
// 	char str6[10] = "abcdju";
// 	char str7[10] = "123456789";
// 	char str8[10] = "abcdju";

// 	printf("ft_strlcpy return:%zu\n", ft_strlcpy(str, str2, 0));
// 	printf("strlcpy return:%zu\n", strlcpy(str3, str4, 0));
// 	printf("ft_strlcpy: %s\n", str);
// 	printf("strlcpy: %s\n", str3);
// 	printf("ft_strlcpy return:%zu\n", ft_strlcpy(str5, str6, 5));
// 	printf("strlcpy return:%zu\n", strlcpy(str7, str8, 5));
// 	printf("ft_strlcpy: %s\n", str5);
// 	printf("strlcpy: %s\n", str7);
// }