/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutabe <yutabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:12:41 by yutabe            #+#    #+#             */
/*   Updated: 2023/05/20 20:40:01 by yutabe           ###   ########.fr       */
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
	int			dst_n;

	writable = dstsize - ft_strlen(dst) - 1;
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	d = dst;
	s = src;
	dst_n = ft_strlen(dst);
	while (*d != '\0')
		d++;
	while (writable-- && *s)
	{
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (ft_strlen(src) + dst_n);
}

int	main(void)
{
	// char str[10] = "123456789";
	// char str2[6] = "abcde";
	char str3[10] = "123456789";
	char str4[6] = "abcde";

	// printf("ft_strlcat:%lu\n", ft_strlcat(NULL, str2, 0));
	// printf("ft_strlcat:%s\n", str);
	printf("strlcat:%lu\n", strlcat(NULL, str4, 0));
	printf("strlcat:%s\n", str3);
}