/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:35:27 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/31 18:06:08 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	count_digits(int n)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	long_n;
	size_t	digits;

	digits = count_digits(n);
	long_n = (long)n;
	if (long_n < 0)
	{
		digits++;
		long_n *= -1;
	}
	str = malloc(digits + 1);
	if (str == NULL)
		return (NULL);
	str[digits] = '\0';
	while (digits--)
	{
		str[digits] = long_n % 10 + '0';
		long_n /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(+123));
// 	printf("%s\n", ft_itoa(-1234));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	char *i1 = ft_itoa(-1234);
// 	printf("i1[5]=NULL? %d\n", i1[5] == '\0');
// 	printf("abc_%d", ft_memcmp(i1, "-1234", 6));
// }
