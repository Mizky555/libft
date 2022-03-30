/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 21:49:01 by tsirirak          #+#    #+#             */
/*   Updated: 2022/03/27 02:13:15 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int     ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	printf("dst_len = %zu, src_len = %zu", dst_len, src_len);
	if (dst_len >= dstsize)
	{
		ft_memcpy(dst + dst_len,src,dstsize);
		return (src_len + dstsize);
	}
	else if (dst_len > dstsize)
	{
		ft_memcpy(dst + dst_len,src,dstsize);
		return (src_len + dstsize);
	}
	return (dst_len + src_len);
}

int	main(void)
{
	int	i;
	char	*src = "AAAAAAAAA";
	char	*dst = "BBBB";

	i = strlcat(dst, src, 6);
	printf("%d\n", i);
	printf("%s\n", dst);

//	i = ft_strlcat("hello", "O", 0);
//	printf("%d\n", i);
}
