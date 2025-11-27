/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:26:04 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/28 13:23:16 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <ctype.h>
// int	main(void)
// {
// 	char	s;
// 	char	t;

// 	s = ft_tolower('A');
// 	t = tolower('A');
// 	printf("%c", s);
// 	printf("%c", t);
// 	return (0);
// }
