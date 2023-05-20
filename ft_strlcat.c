/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:12:41 by yutabe            #+#    #+#             */
/*   Updated: 2023/05/20 23:59:03 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize <= d_len)
		return (s_len + dstsize);
	i = 0;
	while (src[i] && (d_len + i + 1) < dstsize)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

// int	main(void)
// {
// 	char str[10] = "123456789";
// 	char str2[6] = "abcde";
// 	char str3[10] = "123456789";
// 	char str4[6] = "abcde";

// 	printf("ft_strlcat:%lu\n", ft_strlcat(NULL, str2, 0));
// 	printf("ft_strlcat:%s\n", str);
// 	printf("strlcat:%lu\n", strlcat(NULL, str4, 0));
// 	printf("strlcat:%s\n", str3);
// }
