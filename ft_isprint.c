/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:32:28 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/19 11:41:00 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("ft_isprint: %d\n", ft_isprint(' '));
// 	printf("isprint: %d\n", isprint(' '));
	
// 	printf("ft_isprint: %d\n", ft_isprint(0));
// 	printf("isprint: %d\n", isprint(0));

// 	printf("ft_isprint: %d\n", ft_isprint(128));
// 	printf("isprint: %d\n", isprint(128));

// 	printf("ft_isprint: %d\n", ft_isprint(255));
// 	printf("isprint: %d\n", isprint(255));
	
// 	printf("ft_isprint: %d\n", ft_isprint(2147483647));
// 	printf("isprint: %d\n", isprint(2147483647));

// 	printf("ft_isprint: %d\n", ft_isprint(-2147483648));
// 	printf("isprint: %d\n", isprint(-2147483648));
// }