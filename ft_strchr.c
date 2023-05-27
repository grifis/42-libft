/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:52:55 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/27 10:50:17 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s) + 1;
	j = 0;
	while (i--)
	{
		if (s[j] == (char)c)
			return ((char *)s + j);
		j++;
	}
	return (NULL);
}

// int main(void)
// {
//   printf("ft_strchr:%s\n", ft_strchr("Hello", '\0'));
//   printf("strchr:%s\n", strchr("Hello", '\0'));
// }
