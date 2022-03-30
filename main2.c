/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsirirak <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 12:45:58 by tsirirak          #+#    #+#             */
/*   Updated: 2022/03/13 12:55:09 by tsirirak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char str[12] = "HELLO WORLD";
	char *src = &str[0];
	char *dst = &str[3];

	printf("src: %s\n", src);
	printf("src_a: %lu\n", src);
	printf("dst: %s\n", dst);
	printf("dst_a: %lu\n", dst);

	ft_memcpy(dst, src, 8);
	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
}
