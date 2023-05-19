/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:31:29 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/19 19:55:56 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (dst == NULL && src == NULL)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	while (len--)
	{
		if (d < s)
		{
			*d = *s;
			d++;
			s++;
		}
		else
		{
			d[len] = s[len];
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char str[10] = "123456789";
// 	char str2[10] = "123456789";

// 	ft_memmove(str, str + 2, 5);
// 	memmove(str2, str2 + 2, 5);
// 	printf("ft_memmove: %s\n", str);
// 	printf("memmove: %s\n", str2);
// }