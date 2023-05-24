/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:36:45 by abe21453@cs       #+#    #+#             */
/*   Updated: 2023/05/24 17:10:40 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	s;
	size_t	e;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	s = 0;
	e = 0;
	while (s1[s] != '\0')
	{
		if (ft_strchr(set, s1[s]) == NULL)
			break ;
		s++;
	}
	while (s1[s + e] != '\0')
	{
		if (ft_strchr(set, s1[ft_strlen(s1) - 1 - e]) == NULL)
			break ;
		e++;
	}
	ptr = malloc(ft_strlen(s1) - s - e + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1 + s, ft_strlen(s1) - s - e + 1);
	return (ptr);
}

// int	main(void)
// {
// 	char *s1 = "Hello World";
// 	char *set = "d";
// 	char *ptr = ft_strtrim(s1, set);
// 	printf("%s\n", ptr);
// }