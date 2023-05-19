/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:39:30 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/19 11:30:56 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

// int	main(void)
// {
// 	printf("ft_strlen: %zu\n", ft_strlen("123456789"));
// 	printf("strlen: %zu\n", strlen("123456789"));

// 	printf("ft_strlen: %zu\n", ft_strlen(""));
// 	printf("strlen: %zu\n", strlen(""));

// 	printf("ft_strlen: %zu\n", ft_strlen(" 　"));
// 	printf("strlen: %zu\n", strlen(" 　"));
// }