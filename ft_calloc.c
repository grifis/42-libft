/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abe21453@cs.saisoncard.co.jp <abe21453@    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:18:13 by abeyuuta          #+#    #+#             */
/*   Updated: 2023/05/24 10:28:34 by abe21453@cs      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	*ptr;

	if (size > 0 && SIZE_MAX / size < count)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return ((void *)ptr);
}

// int	main(void)
// {
// 	int	*ptr;
// 	int	i;

// 	ptr = ft_calloc(10, 10);
// 	i = 0;
// 	printf("ptr:%p\n", ptr);
// 	while (i < 10)
// 	{
// 		printf("%d\n", ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// }
