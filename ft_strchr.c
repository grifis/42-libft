/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:52:55 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/24 10:30:37 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
  size_t j;

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