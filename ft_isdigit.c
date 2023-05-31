/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:04:14 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/31 14:53:48 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("ft_isdigit: %d\n", ft_isdigit('0'));
// 	printf("isdigit: %d\n", isdigit('0'));

//     printf("ft_isdigit: %d\n", ft_isdigit('9'));
//     printf("isdigit: %d\n", isdigit('9'));

//     printf("ft_isdigit: %d\n", ft_isdigit('a'));
//     printf("isdigit: %d\n", isdigit('a'));
// }