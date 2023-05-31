/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 21:00:33 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/31 15:26:13 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	needle_len = ft_strlen(needle);
	while (haystack[i] != '\0' && len - i >= needle_len)
	{
		if (haystack[i] == needle[0])
			if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
				return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*haystack = "1212623222123";
// 	char	*needle = "123";

// 	printf("ft_strnstr:%s\n", ft_strnstr(NULL, needle, 0));
// 	printf("strnstr:%s\n", strnstr(NULL, needle, 0));

// 	printf("ft_strnstr:%s\n", ft_strnstr(haystack, needle, 30));
// 	printf("strnstr:%s\n", strnstr(haystack, needle, 30));
// 	return (0);
// }
