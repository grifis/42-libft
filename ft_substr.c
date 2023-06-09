/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:52:42 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/31 18:04:01 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < len)
		ptr = malloc(s_len + 1);
	else
		ptr = malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	if (s_len < start)
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

// 	char *ptr6 = ft_substr(s, -1, -2055);
// 	printf("NULLが返却%s\n", ptr6);
// 	return (0);
// }