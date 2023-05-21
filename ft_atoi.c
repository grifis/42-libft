/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 14:46:58 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/21 20:52:16 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	long	result;

	if (str == NULL || *str == '\0')
		return (0);
	while (ft_isspace(*str))
		str++;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	result = 0;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (result * sign);
		if (sign == 1 && result > (LONG_MAX - (*str - '0')) / 10)
			return ((int)LONG_MAX);
		if (sign == -1 && -result < (LONG_MIN + (*str - '0')) / 10)
			return ((int)LONG_MIN);
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}



// int	main(void)
// {
	// 	printf("ft_atoi: %d\n", ft_atoi("123"));
	// 	printf("atoi: %d\n", atoi("123"));
	// 	printf("ft_atoi: %d\n", ft_atoi("123a"));
	// 	printf("atoi: %d\n", atoi("123a"));
	// 	printf("ft_atoi: %d\n", ft_atoi("a123"));
	// 	printf("atoi: %d\n", atoi("a123"));
	// 	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
	// 	printf("atoi: %d\n", atoi("2147483647"));
	// 	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
	// 	printf("atoi: %d\n", atoi("-2147483648"));
	// 	printf("ft_atoi: %d\n", ft_atoi("-123"));
	// 	printf("atoi: %d\n", atoi("-123"));
	// 	printf("ft_atoi: %d\n", ft_atoi("+ 123"));
	// 	printf("atoi: %d\n", atoi("+ 123"));
	// 	printf("ft_atoi: %d\n", ft_atoi("\t\v\f\r\n \f+\t\v\f\r\n \f1234"));
	// 	printf("atoi: %d\n", atoi("\t\v\f\r\n \f+\t\v\f\r\n \f1234"));
	// 	printf("ft_atoi: %d\n", ft_atoi(" 123"));
	// 	printf("atoi: %d\n", atoi(" 123"));
	// 	printf("ft_atoi: %d\n", ft_atoi("123 "));
	// 	printf("atoi: %d\n", atoi("123 "));
	// 	printf("ft_atoi: %d\n", ft_atoi(" 123 "));
	// 	printf("atoi: %d\n", atoi(" 123 "));
	// 	printf("ft_atoi: %d\n", ft_atoi(" 123 456"));
	// 	printf("atoi: %d\n", atoi(" 123 456"));
// 	printf("ft_atoi: %d\n", ft_atoi("922337203685477580711"));
// 	printf("atoi: %d\n", atoi("922337203685477580711"));
// }
//long 9223372036854775807
//long -9223372036854775808
