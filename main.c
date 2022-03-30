#include<stdio.h>
#include "libft.h"
#include <string.h>

int	main(void)
{
//	char dst[10];
//	char src[] = "Hello";
//	char dst2[10];
	char b[10]="Hello";
	char bzero[]="Hello";
	char memcpydst[]="Hello";
	char memcpysrc[]="World";
	char memmovedst[]="Hello";
	char memmovesrc[]="World";
//	char strlcpysrc[] = "Hello";
//	char strlcpydst [200];
	printf("ft_isalnum = %d\n",ft_isalnum('l'));
	printf("ft_strchr = %s\n",ft_strchr("Hello Kitty",'s'));
	printf("ft_strrchr = %s\n",ft_strrchr("Hello Opal",'e'));
	printf("ft_atoi = %d\n",ft_atoi(" ---+--+1234ab567"));
	printf("ft_atoi test -+42 = %d\n",ft_atoi("-+42"));
	printf("ft_atoi test 12 = %d\n",ft_atoi("12"));
	printf("ft_atoi a = %d\n",ft_atoi("a"));
	printf("ft_strlen 34ik = %zu\n",ft_strlen("34ik"));
//	printf("ft_strlcpy = %zu , %s\n",ft_strlcpy(dst,src,1),dst);
//	printf("strlcpy = %d , %s\n",strlcpy(dst2,src,1), dst2);
	printf("ft_memset = %s\n",ft_memset(b,'$',2));
	ft_bzero(bzero,6);
	printf("ft_bzero = %s\n",bzero);
	ft_memcpy(memcpydst,memcpysrc,2);
	printf("ft_memcpy = %s\n",memcpydst);
	ft_memmove(memmovedst,memmovesrc,2);
	printf("ft_memmove = %s\n",memmovedst);
	printf("ft_memchr = \n");
//	printf("ft_strlcpy = %d\n",ft_strlcpy(strlcpysrc,strlcpydst,3));
//	printf("ft_strlcpy dst = %s src = %s\n",strlcpydst,strlcpysrc);
	printf("strlcat 0 = %lu\n",strlcat("Hello","O",0));
	printf("ft_strlcat 0 = %d\n",ft_strlcat("Hello","O",0));
	printf("strlcat 2 = %lu\n",strlcat("Hello","O",2));
	printf("ft_strlcat 2 = %d\n",ft_strlcat("Hello","O",2));
	printf("strlcat 5 = %lu\n",strlcat("Hello","O",5));
	printf("ft_strlcat 5 = %d\n",ft_strlcat("Hello","O",5));
	printf("strlcat 6 = %lu\n",strlcat("Hello","O",6));
	printf("ft_strlcat 6 = %d\n",ft_strlcat("Hello","O",6));
}
