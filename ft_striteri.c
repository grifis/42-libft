/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:33:49 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/31 17:29:10 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	test(unsigned int i, char *c)
// {
// 	if (i % 2 == 0)
// 		return ;
// 	else
// 		*c = '1';
// }

// int	main(void)
// {
// 	char str[] = "Hello World!";
// 	ft_striteri(str, &test);
// 	printf("%s\n", str);

// 	ft_striteri(NULL, &test);

// 	char str2[] = "a";
// 	ft_striteri(str2, NULL);
// 	printf("%s\n", str2);

// 	char str3[] = "";
// 	ft_striteri(str3, &test);
// 	printf("%s\n", str3);
// 	return (0);
// }