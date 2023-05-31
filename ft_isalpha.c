/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:06:04 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/31 14:53:34 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('a'));
// 	printf("%d\n", isalpha('a'));

//     printf("%d\n", ft_isalpha('A'));
//     printf("%d\n", isalpha('A'));

//     printf("%d\n", ft_isalpha('Z'));
//     printf("%d\n", isalpha('Z'));

//     printf("%d\n", ft_isalpha('z'));
//     printf("%d\n", isalpha('z'));

//     printf("%d\n", ft_isalpha('0'));
//     printf("%d\n", isalpha('0'));

//     printf("%d\n", ft_isalpha('9'));
//     printf("%d\n", isalpha('9'));

//     printf("%d\n", ft_isalpha(' '));
//     printf("%d\n", isalpha(' '));

// 	printf("%d\n", ft_isalpha(0));
//     printf("%d\n", isalpha(0));

//     printf("%d\n", ft_isalpha(128));
//     printf("%d\n", isalpha(128));

//     printf("%d\n", ft_isalpha(2147483647));
//     printf("%d\n", isalpha(2147483647));

//     printf("%d\n", ft_isalpha(-2147483648));
//     printf("%d\n", isalpha(-2147483648));

// }
