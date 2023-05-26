/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 14:23:31 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/26 16:30:55 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	new_str = (char *)malloc(ft_strlen(s) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

// char	test(unsigned int i, char c)
// {
// 	if (i % 2 == 0)
// 		return (c);
// 	else
// 		return (c + 1);
// }

// int	main(void)
// {
// 	printf("%s\n", ft_strmapi("Hello World!", &test));
// 	printf("%s\n", ft_strmapi(NULL, &test));
// 	printf("%s\n", ft_strmapi("a", NULL));
//     printf("%s\n", ft_strmapi("", &test));
// 	return (0);
// }