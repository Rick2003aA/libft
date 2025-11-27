/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtsubuku <rtsubuku@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 19:10:29 by rtsubuku          #+#    #+#             */
/*   Updated: 2025/10/28 13:07:06 by rtsubuku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	long	n;
	int		countn;

	n = 0;
	countn = 1;
	while ((*nptr == ' ' || (9 <= *nptr && *nptr <= 13)))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			countn = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		n = (n * 10) + (*nptr - '0');
		nptr++;
	}
	return (countn * n);
}

// #include <stdlib.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("   123"));
// 	printf("%d\n", ft_atoi("-+--123"));
// 	printf("%d\n", ft_atoi("1234567890"));
// 	printf("%d\n", ft_atoi("12345678901"));
// 	printf("%d\n", ft_atoi("12.34"));
// 	printf("%d\n", ft_atoi("abc"));
// 	printf("%d\n", ft_atoi("2147483647"));
// 	printf("%d\n", ft_atoi("-2147483648"));
// 	printf("%d\n", atoi("   123"));
// 	printf("%d\n", atoi("-+--123"));
// 	printf("%d\n", atoi("1234567890"));
// 	printf("%d\n", atoi("12345678901"));
// 	printf("%d\n", atoi("12.34"));
// 	printf("%d\n", atoi("abc"));
// 	printf("%d\n", atoi("2147483647"));
// 	printf("%d\n", atoi("-2147483648"));
// }
