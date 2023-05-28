/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 11:35:27 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/28 23:12:50 by abeyuuta         ###   ########.fr       */
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

char	*initilize_str(int n, long *long_n)
{
	char	*str;

	str = malloc(12);
	if (str == NULL)
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	*long_n = (long)n;
	if (*long_n < 0)
	{
		*str = '-';
		*long_n *= -1;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*result;
	int		i;
	long	long_n;

	str = initilize_str(n, &long_n);
	if (str == NULL || n == 0)
		return (str);
	result = str;
	if (n < 0)
		str++;
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
