/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkhye-ya <lkhye-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:10:35 by yachan            #+#    #+#             */
/*   Updated: 2024/06/20 19:20:49 by lkhye-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*src1;
	unsigned char	*src2;

	src1 = (unsigned char *)s1;
	src2 = (unsigned char *)s2;
	while (n > 0)
	{
		if (*src1 != *src2)
			return ((int)*src1 - (int)*src2);
		src1++;
		src2++;
		n--;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	int i = ft_memcmp((int *)12, (int *)1, sizeof(char));
	printf("%i\n", i);
}
