/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:10:17 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/31 18:05:48 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL && s2 == NULL)
		return (ft_strdup(""));
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = malloc(s1_len + s2_len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, s1_len + 1);
	ft_strlcat(ptr, s2, s1_len + s2_len + 1);
	return (ptr);
}

// int	main(void)
// {
// 	char *s1 = "Hello";
// 	char *s2 = "World";
// 	char *ptr = ft_strjoin(s1, s2);
// 	printf("%s\n", ptr);

// 	char *ptr2 = ft_strjoin(NULL, s2);
// 	printf("%s\n", ptr2);

// 	char *ptr3 = ft_strjoin(s1, NULL);
// 	printf("%s\n", ptr3);

// 	char *ptr4 = ft_strjoin(NULL, NULL);
// 	printf("%s\n", ptr4);
// }