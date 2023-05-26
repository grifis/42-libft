/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:35:27 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/26 14:30:00 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	reverse_string(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*result;
	int		i;
	long	long_n;

	str = malloc(12);
	result = str;
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (result);
	}
	long_n = (long)n;
	if (n < 0)
	{
		*str = '-';
		str++;
		long_n *= -1;
	}
	i = 0;
	while (long_n)
	{
		str[i] = long_n % 10 + '0';
		long_n /= 10;
		i++;
	}
	reverse_string(str);
	str[i] = '\0';
	return (result);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(+123));
// 	printf("%s\n", ft_itoa(-123));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// }