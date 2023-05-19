/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:42:10 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/19 15:14:55 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
	{
		*p = 0;
		p++;
	}
}

// int	main(void)
// {
// 	char str[10] = "123456789";
// 	char str2[10] = "123456789";
// 	int i = 0;

// 	ft_bzero(str, 5);
// 	bzero(str2, 5);

// 	printf("ft_bzero↓ \n");
// 	while (i < 9)
// 		printf("%c ", str[i++]);

// 	i = 0;
// 	printf("\nbzero↓ \n");
// 	while (i < 9)
// 		printf("%c ", str2[i++]);
// 	return (0);
// }