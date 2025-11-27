/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:12:47 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:12 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// // #include <ctype.h>
// int	main(void)
// {
// 	printf("ft version\n");
// 	printf("%d\n", ft_isascii('a'));
// 	printf("%d\n", ft_isascii('@'));
// 	printf("%d\n", ft_isascii(200));
// 	printf("original versio\n");
// 	printf("%d\n", __isascii('a'));
// 	printf("%d\n", __isascii('@'));
// 	printf("%d\n", __isascii(200));
// 	return (0);
// }
