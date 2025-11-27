/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:32:49 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/25 13:48:12 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (2048);
	return (0);
}

// // #include <ctype.h>
// int	main(void)
// {
// 	printf("ft version\n");
// 	printf("%d\n", ft_isdigit('9'));
// 	printf("%d\n", ft_isdigit(12));
// 	printf("original versio\n");
// 	printf("%d\n", isdigit('9'));
// 	printf("%d\n", isdigit(9));
// 	return (0);
// }
