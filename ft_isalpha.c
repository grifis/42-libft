/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:06:04 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/18 09:31:15 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((97 <= c && c <= 122) || (65 <= c && c <= 90))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char c = 'a';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));

    printf("%d\n", ft_isalpha('A'));
    printf("%d\n", isalpha('A'));

    printf("%d\n", ft_isalpha('Z'));
    printf("%d\n", isalpha('Z'));

    printf("%d\n", ft_isalpha('z'));
    printf("%d\n", isalpha('z'));

    printf("%d\n", ft_isalpha('0'));
    printf("%d\n", isalpha('0'));

    printf("%d\n", ft_isalpha('9'));
    printf("%d\n", isalpha('9'));

    printf("%d\n", ft_isalpha(' '));
    printf("%d\n", isalpha(' '));

		printf("%d\n", ft_isalpha(0));
    printf("%d\n", isalpha(0));

    printf("%d\n", ft_isalpha(128));
    printf("%d\n", isalpha(128));

		printf("%d\n", ft_isalpha(-1));
    printf("%d\n", isalpha(-1));

}
