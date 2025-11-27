/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 11:36:52 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:49:10 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *) s;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}

// #include <strings.h>
// int	main(void)
// {
// 	char	s[10] = "0123456789";
// 	// char	s2[10] = "0123456789";

// 	// ft_bzero(s, 1);
// 	// printf("%s\n", s);
// 	bzero(s, 5);
// 	printf("%s", s);
// 	return (0);
// }
