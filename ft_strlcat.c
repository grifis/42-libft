/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutabe <yutabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:12:41 by yutabe            #+#    #+#             */
/*   Updated: 2023/05/20 21:02:03 by yutabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	int			writable;
	int			d_n;

	// if (!dst)
	// 	return (ft_strlen(src));
	d_n = ft_strlen(dst);
	if ((int)dstsize <= d_n)
		return (ft_strlen(src) + dstsize);
	d = dst;
	s = src;
	while (*d != '\0')
		d++;
	writable = dstsize - d_n - 1;
	while (writable-- && *s)
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (ft_strlen(src) + d_n);
}

int	main(void)
{
	// char str[10] = "123456789";
	// char str2[6] = "abcde";
	// char str3[10] = "123456789";
	char str4[6] = "abcde";

	// printf("ft_strlcat:%lu\n", ft_strlcat(str, str2, 10));
	// printf("ft_strlcat:%s\n", str);
	printf("strlcat:%lu\n", strlcat(NULL, str4, 0));
	// printf("strlcat:%s\n", str3);
}