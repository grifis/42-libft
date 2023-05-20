/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutabe <yutabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:12:41 by yutabe            #+#    #+#             */
/*   Updated: 2023/05/20 19:00:12 by yutabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	const char	*s;
	int			limit;
	int			dst_val;

	s = src;
	dst_val = ft_strlen(dst);
	limit = dstsize - strlen(dst) - 1;
	if (dstsize < ft_strlen(src))
		return (ft_strlen(src) + dstsize);
	while (limit-- && *s)
	{
		*dst = *s;
		dst++;
		s++;
	}
	*dst = '\0';
	return (ft_strlen(src) + dst_val);
}

int	main(void)
{
	char str[20] = "123456789";
	char str2[10] = "abcde";
	char str3[20] = "123456789";
	char str4[10] = "abcde";

	printf("ft_strlcat:%lu\n", ft_strlcat(str, str2, 20));
	printf("ft_strlcat:%s\n", str);
	printf("strlcat:%lu\n", strlcat(str3, str4, 20));
	printf("strlcat:%s\n", str2);
}