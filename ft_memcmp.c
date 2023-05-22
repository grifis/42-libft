/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 22:41:04 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/22 09:48:02 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "13345";
// 	str2 = "12345";
// 	printf("ft_memcmp:%d\n", ft_memcmp(str1, str2, 4));
// 	printf("memcmp:%d\n", memcmp(str1, str2, 4));
// 	return (0);
// }
