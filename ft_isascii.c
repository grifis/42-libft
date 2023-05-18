/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 23:41:54 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/18 11:44:14 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	else
		return (0);
}

// int	main(void)
// {
//     printf("ft_isascii: %d\n", ft_isascii('a'));
//     printf("isascii %d\n", isascii('a'));

//     printf("ft_isascii: %d\n", ft_isascii('A'));
//     printf("isascii %d\n", isascii('A'));

//     printf("ft_isascii: %d\n", ft_isascii(0));
//     printf("isascii %d\n", isascii(0));

//     printf("ft_isascii: %d\n", ft_isascii(127));
//     printf("isascii %d\n", isascii(127));

//     printf("ft_isascii: %d\n", ft_isascii(128));
//     printf("isascii %d\n", isascii(128));

//     printf("ft_isascii: %d\n", ft_isascii(2147483647));
//     printf("isascii %d\n", isascii(2147483647));

//     printf("ft_isascii: %d\n", ft_isascii(-2147483648));
//     printf("isascii %d\n", isascii(-2147483648));
// }
