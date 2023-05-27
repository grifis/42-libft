/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeyuuta <abeyuuta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 19:57:23 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/27 10:47:46 by abeyuuta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>
// #include <string.h>

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	i;

	i = ft_strlen(s1) + 1;
	ptr = malloc(i);
	if (!ptr)
		return (NULL);
	while (i--)
		ptr[i] = s1[i];
	return (ptr);
}

// int	main(void)
// {
// 	printf("ft_strdup:%s\n", ft_strdup("Hello"));
// 	printf("strdup:%s\n", strdup("Hello"));
// }
