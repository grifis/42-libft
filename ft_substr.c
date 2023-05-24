/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:52:42 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/23 18:14:09 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < len)
		ptr = malloc(ft_strlen(s) + 1);
	else
		ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		*ptr = '\0';
		return (ptr);
	}
	if (len == SIZE_MAX)
		ft_strlcpy(ptr, s + start, SIZE_MAX);
	else
		ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}

// int	main(void)
// {
// 	char *s = "Hello World";
// 	char *ptr = ft_substr(s, 0, 11);
// 	printf("%s\n", ptr);

// 	char *ptr2 = ft_substr(s, 0, 0);
// 	printf("空文字が返却：%s\n", ptr2);

// 	char *ptr3 = ft_substr(s, 0, SIZE_MAX);
// 	printf("%s\n", ptr3);

// 	char *ptr4 = ft_substr(s, 50, 11);
// 	printf("空文字が返却%s\n", ptr4);

// 	char *ptr5 = ft_substr(NULL, 50, 11);
// 	printf("NULLが返却%s\n", ptr5);
// 	return (0);
// }