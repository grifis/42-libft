/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yutabe <yutabe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:12:41 by yutabe            #+#    #+#             */
/*   Updated: 2023/05/20 19:16:18 by yutabe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	int			limit;
	int			dst_val;

	d = dst;
	s = src;
	dst_val = ft_strlen(dst);
	limit = dstsize - ft_strlen(dst) - 1;
	if (limit <= 0)
		return (ft_strlen(src) + dstsize -1);
	while (limit-- && *s)
	{
		printf("ad%s", "ss");
		*d = *s;
		d++;
		s++;
	}
	*d = '\0';
	return (ft_strlen(src) + dst_val);
}

int	main(void)
{
	char str[20] = "123456789";
	char str2[10] = "abcde";
	char str3[20] = "123456789";
	char str4[10] = "abcde";

	printf("ft_strlcat:%lu\n", ft_strlcat(str, str2, 10));
	printf("ft_strlcat:%s\n", str);
	printf("strlcat:%lu\n", strlcat(str3, str4, 10));
	printf("strlcat:%s\n", str3);
}