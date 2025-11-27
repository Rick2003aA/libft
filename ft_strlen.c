/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:28:49 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:51 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <string.h>
// int	main(void)
// {
// 	int	i;
// 	int	j;

// 	i = ft_strlen("");
// 	j = strlen("");
// 	printf("ft version\n");
// 	printf("%d\n", i);
// 	printf("original versio\n");
// 	printf("%d\n", j);
// 	return (0);
// }
