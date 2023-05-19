/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 20:20:37 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/19 20:28:34 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <ctype.h>
// #include <stdio.h>

int	ft_isalnum(int c)
{
	if ((48 <= c && c <= 57) || (97 <= c && c <= 122) || (65 <= c && c <= 90))
		return (1);
	else
		return (0);
}

// int main(void)
// {
//     	char c = 'a';
// 	printf("ft_isalnum: %d\n", ft_isalnum(c));
// 	printf("isalnum: %d\n", isalnum(c));

//             printf("ft_isalnum: %d\n", ft_isalnum('A'));
//         	printf("isalnum: %d\n", isalnum('A'));

//         	printf("ft_isalnum: %d\n", ft_isalnum('Z'));
//         	printf("isalnum: %d\n", isalnum('Z'));

//         	printf("ft_isalnum: %d\n", ft_isalnum('z'));
//         	printf("isalnum: %d\n", isalnum('z'));

//         	printf("ft_isalnum: %d\n", ft_isalnum('0'));
//         	printf("isalnum: %d\n", isalnum('0'));

//         	printf("ft_isalnum: %d\n", ft_isalnum('9'));
//         	printf("isalnum: %d\n", isalnum('9'));

//         	printf("ft_isalnum: %d\n", ft_isalnum(' '));
//         	printf("isalnum: %d\n", isalnum(' '));
// }