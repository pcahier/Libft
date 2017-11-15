/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcahier <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:39:15 by pcahier           #+#    #+#             */
/*   Updated: 2017/11/15 16:11:37 by pcahier          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main(void)
{
	char	dst[100] = {"  Batman Ipsum"};
	char	dst2[100] = {"  Batman Ipsum"};
	char	dst3[30] = {"  Lorem Ipsum de la mort 	"};
	char	dst4[30] = {"  Lorem Ipsum de la mort 	"};
	char	*nul = NULL;
	unsigned int u = 0;
	char	vide[1] = {""};
/*
	printf("%s", "FT_ITOA\n");
	printf("%s", ft_itoa(-623));
	printf("%s", "\n");
	printf("%s", ft_itoa(0));
	printf("%s", "\n");
	printf("%s", ft_itoa(12345));
	printf("%s", "\n");

	printf("FT_STRALNUMWRDCNT : \n");
	printf("%d\n", ft_stralnumwrdcnt("Salut 2'personnes!hell1"));

	printf("FT_STRPBRK : \n");
	printf("%s\n", ft_strpbrk("collagene", ""));
	printf("%s\n", ft_strpbrk("collagene", "kripptark"));
	printf("%s\n", ft_strpbrk("collagene", "14"));
	printf("%s\n", ft_strpbrk("collagene", "g"));
	printf("%s\n", ft_strpbrk("", ""));

	printf("%s", "FT_STRTRIM\n");
	printf("%s", ft_strtrim(dst));
	printf("%s", "\n");

	printf("%s", "FT_STRLEN\n");
	printf("%zu, \n", ft_strlen("\0"));
	printf("%zu, \n", strlen("\0"));
	printf("%zu, \n", ft_strlen("coucou"));
	printf("%zu, \n", strlen("coucou"));
	printf("%zu, \n", ft_strlen("244wr45564rwrr43w53"));
	printf("%zu, \n", strlen("244wr45564rwrr43w53"));
	printf("%zu, \n", ft_strlen("     "));
	printf("%zu, \n", strlen("     "));
	printf("%zu, \n", ft_strlen("	"));
	printf("%zu, \n", strlen("	"));

	printf("%s", "FT_STRCPY\n");
	printf("%s", ft_strcpy(dst, "Coucou !"));
	printf("%s", strcpy(dst2, " - Coucou !\n"));
	printf("%s", ft_strcpy(dst, "\0\n"));
	printf("%s", strcpy(dst2, " - \0\n"));
	printf("%s", "\n");
	printf("%s", ft_strcpy(dst, "chaine super longue qui doit depasser de l'espace alloue a destination"));
	printf("%s", "\n");
	printf("%s", strcpy(dst2, "chaine super longue qui doit depasser de l'espace alloue a destination"));
	printf("%s", "\n");

	printf("%s", "FT_MEMCPY\n");
	printf("%s", ft_memcpy(dst, dst3, 0));
	printf("%s", "\n");
	printf("%s", memcpy(dst2, dst4, 0));
	printf("%s", "\n");
//	printf("%s", ft_memcpy(dst + 2, dst, 10));
//	printf("%s", "\n");
//	printf("%s", memcpy(dst2 + 2, dst2, 10));
//	printf("%s", "\n");
	printf("%s", ft_memcpy(dst, dst3, 30));
	printf("%s", "\n");
	printf("%s", memcpy(dst2, dst4, 30));
	printf("%s", "\n");

	printf("%s", "FT_MEMMOVE\n");
	printf("%s", ft_memmove(dst, dst3, 0));
	printf("%s", "\n");
	printf("%s", memmove(dst2, dst4, 0));
	printf("%s", "\n");
	printf("%s", ft_memmove(dst + 2, dst, 10));
	printf("%s", "\n");
	printf("%s", memmove(dst2 + 2, dst2, 10));
	printf("%s", "\n");
	printf("%s", ft_memmove(dst, dst3, 26));
	printf("%s", "\n");
	printf("%s", memmove(dst2, dst4, 26));
	printf("%s", "\n");


	printf("%s", "FT_MEMCCPY\n");
	printf("%s", ft_memccpy(dst, dst3, 97, 20));
	printf("%s", "\n");
	printf("%s", memccpy(dst2, dst4, 97, 20));
	printf("%s", "\n");
	printf("%s", ft_memccpy(dst, dst3, 10, 20));
	printf("%s", "\n");
	printf("%s", memccpy(dst2, dst4, 10, 20));
	printf("%s", "\n");
	printf("%s", ft_memccpy(dst, dst3, 32, 20));
	printf("%s", "\n");
	printf("%s", memccpy(dst2, dst4, 32, 20));
	printf("%s", "\n");

	printf("%s", "FT_STRNCPY\n");
	printf("%s", ft_strncpy(dst, "Coucou !", 20));
	printf("%s", "\n");
	printf("%s", strncpy(dst2, "Coucou !", 20));
	printf("%s", "\n");
//	printf("%s", ft_strncpy(dst, "\0\n", -10));
//	printf("%s", "\n");
//	printf("%s", strncpy(dst2, "\0\n", -10));
//	printf("%s", "\n");
	printf("%s", ft_strncpy(dst, "chaine super longue qui doit depasser de l'espace alloue a destination", 50));
	printf("%s", "\n");
	printf("%s", strncpy(dst2, "chaine super longue qui doit depasser de l'espace alloue a destination", 50));
	printf("%s", "\n");

	printf("%s", "FT_STRDUP\n");
	printf("%s", ft_strdup("Coucou !"));
	printf("%s", "\n");
	printf("%s", strdup("Coucou !"));
	printf("%s", "\n");
	printf("%s", ft_strdup("\0\n"));
	printf("%s", "\n");
	printf("%s", strdup("\0\n"));
	printf("%s", "\n");
	printf("%s", ft_strdup("chaine super longue qui doit depasser de l'espace alloue a destination"));
	printf("%s", "\n");
	printf("%s", strdup("chaine super longue qui doit depasser de l'espace alloue a destination"));
	printf("%s", "\n");

	printf("%s", "FT_STRCAT\n");
	printf("%s", ft_strcat(dst, "Coucou !"));
	printf("%s", "\n");
	printf("%s", strcat(dst2, "Coucou !"));
	printf("%s", "\n");
	printf("%s", ft_strcat(dst, "\0\n"));
	printf("%s", "\n");
	printf("%s", strcat(dst2, "\0\n"));
	printf("%s", "\n");
//	printf("%s", strcat(dst, "chaine super longue qui doit depasser de l'espace alloue a destination"));
//	printf("%s", "\n");
//	printf("%s", ft_strcat(dst2, "chaine super longue qui doit depasser de l'espace alloue a destination"));
//	printf("%s", "\n");

	printf("%s", "FT_STRNCAT\n");
	printf("%s", ft_strncat(dst, "Coucou !", 30));
	printf("%s", "\n");
	printf("%s", strncat(dst2, "Coucou !", 30));
	printf("%s", "\n");
	printf("%s", ft_strncat(dst, "\0\n", 8));
	printf("%s", "\n");
	printf("%s", strncat(dst2, "\0\n", 8));
	printf("%s", "\n");
	printf("%s", ft_strncat(dst, "pas en entier", 8));
	printf("%s", "\n");
	printf("%s", strncat(dst2, "pas en entier", 8));
	printf("%s", "\n");
//	printf("%s", ft_strncat(dst, "Coucou ! Coucou ! lalalalala", 10));
//	printf("%s", "\n");
//	printf("%s", strncat(dst2, "Coucou ! Coucou ! lalalalala", 10));
//	printf("%s", "\n");
	printf("%s", ft_strncat(dst, "\0\n", 0));
	printf("%s", "\n");
	printf("%s", strncat(dst2, "\0\n", 0));
	printf("%s", "\n");
*/
	char dst5[100] = {"a"};
	char dst6[100] = {"a"};
	char buf[10];
	
	printf("%s", "FT_STRLCAT\n");
	printf("%ld", ft_strlcat(dst5, "Je test un Strlcat !", 2));
	printf("%s", "\n");
	printf("%s", dst5);
	printf("%s", "\n");
	printf("%ld", strlcat(dst6, "Je test un Strlcat !", 2));
	printf("%s", "\n");
	printf("%s", dst6);
	printf("%s", "\n");
	printf("%ld", ft_strlcat(dst5, "\0\n", 8));
	printf("%s", "\n");
	printf("%s", dst5);
	printf("%s", "\n");
	printf("%ld", strlcat(dst6, "\0\n", 8));
	printf("%s", "\n");
	printf("%s", dst6);
	printf("%s", "\n");
	printf("%ld", ft_strlcat(dst5, "pas en entier", 8));
	printf("%s", "\n");
	printf("%s", dst5);
	printf("%s", "\n");
	printf("%ld", strlcat(dst6, "pas en entier", 8));
	printf("%s", "\n");
	printf("%s", dst6);
	printf("%s", "\n");
	printf("%ld", ft_strlcat(dst5, "Coucou ! Coucou ! lalalalala", 28));
	printf("%s", "\n");
	printf("%s", dst5);
	printf("%s", "\n");
	printf("%ld", strlcat(dst6, "Coucou ! Coucou ! lalalalala", 28));
	printf("%s", "\n");
	printf("%s", dst6);
	printf("%s", "\n");
	printf("%ld", ft_strlcat(dst5, "o", 2));
	printf("%s", "\n");
	printf("%s", dst5);
	printf("%s", "\n");
	printf("%ld", strlcat(dst6, "o", 2));
	printf("%s", "\n");
	printf("%s", dst6);
	printf("%s", "\n");
/*
	printf("%s", "FT_STRCMP\n");
	printf("%d", ft_strcmp("Coucou !", "Coucou !2"));
	printf("%s", "\n");
	printf("%d", strcmp("Coucou !", "Coucou !2"));
	printf("%s", "\n");
	printf("%d", ft_strcmp("\0\n", "6"));
	printf("%s", "\n");
	printf("%d", strcmp("\0\n", "6"));
	printf("%s", "\n");
	printf("%d", ft_strcmp("\200", "\0"));
	printf("%s", "\n");
	printf("%d", strcmp("\200", "\0"));
	printf("%s", "\n");
	printf("%d", ft_strcmp("allo", "all "));
	printf("%s", "\n");
	printf("%d", strcmp("allo", "all "));
	printf("%s", "\n");

	printf("%s", "FT_MEMCMP\n");
	printf("%d", ft_memcmp("Coucou !", "Coucou !2", -8));
	printf("%s", "\n");
	printf("%d", memcmp("Coucou !", "Coucou !2", -8));
	printf("%s", "\n");
	printf("%d", ft_memcmp("\0\n", "\0", 4));
	printf("%s", "\n");
	printf("%d", memcmp("\0\n", "\0", 4));
	printf("%s", "\n");
	printf("%d", ft_memcmp("\200", "\0", 5));
	printf("%s", "\n");
	printf("%d", memcmp("\200", "\0", 5));
	printf("%s", "\n");
	printf("%d", ft_memcmp("allo", "all ", 6));
	printf("%s", "\n");
	printf("%d", memcmp("allo", "all ", 6));
	printf("%s", "\n");

	printf("%s", "FT_MEMSET\n");
	printf("%s", ft_memset(dst4, 65, 2));
	printf("%s", "\n");
	printf("%s", memset(dst3, 65, 2));
	printf("%s", "\n");
	printf("%s", ft_memset(dst4, 0, 4));
	printf("%s", "\n");
	printf("%s", memset(dst3, 0, 4));
	printf("%s", "\n");
	printf("%s", ft_memset(dst4, 510, 5));
	printf("%s", "\n");
	printf("%s", memset(dst3, 510, 5));
	printf("%s", "\n");
	printf("%s", ft_memset(dst4, -2, 6));
	printf("%s", "\n");
	printf("%s", memset(dst3, -2, 6));
	printf("%s", "\n");

	printf("%s", "FT_BZERO\n");
	ft_bzero(dst4, 10);
	printf("%s", "\n");
	bzero(dst3, 10);
	printf("%s", "\n");
	ft_bzero(dst4, 0);
	printf("%s", "\n");
	bzero(dst3, 0);
	printf("%s", "\n");

	printf("%s", "FT_STRCHR\n");
	printf("%s", ft_strchr("N=BCoucou !", 67 + 256));
	printf("%s", "\n");
	printf("%s", strchr("N=BCoucou !", 67 + 256));
	printf("%s", "\n");
	printf("%s", ft_strchr("Coucou !", 99));
	printf("%s", "\n");
	printf("%s", strchr("Coucou !", 99));
	printf("%s", "\n");
	printf("%s", ft_strchr("\0\n", 0));
	printf("%s", "\n");
	printf("%s", strchr("\0\n", 0));
	printf("%s", "\n");
	printf("%s", ft_strchr("\200", 200));
	printf("%s", "\n");
	printf("%s", strchr("\200", 200));
	printf("%s", "\n");
	printf("%s", ft_strchr("allo", 2));
	printf("%s", "\n");
	printf("%s", strchr("allo", 2));
	printf("%s", "\n");

	int	i[3] = {5, 200, 1};

	printf("%s", "FT_MEMCHR\n");
	printf("%s", ft_memchr("Coucou !", -4, 10));
	printf("%s", "\n");
	printf("%s", memchr("Coucou !", -4, 10));
	printf("%s", "\n");
	printf("%s", ft_memchr("Coucou !", 99, 100));
	printf("%s", "\n");
	printf("%s", memchr("Coucou !", 99, 100));
	printf("%s", "\n");
	printf("%s", ft_memchr("\0\n", 0, 20));
	printf("%s", "\n");
	printf("%s", memchr("\0\n", 0, 20));
	printf("%s", "\n");
	printf("%s", ft_memchr(i, 200, 1));
	printf("%s", "\n");
	printf("%s", memchr(i, 200, 1));
	printf("%s", "\n");
	printf("%s", ft_memchr("allo", 2, 1));
	printf("%s", "\n");
	printf("%s", memchr("allo", 2, 1));
	printf("%s", "\n");

	printf("%s", "FT_STRRCHR\n");
	printf("%s", ft_strrchr("Coucou !", 67 + 256));
	printf("%s", "\n");
	printf("%s", strrchr("Coucou !", 67 + 256));
	printf("%s", "\n");
	printf("%s", ft_strrchr("Coucou c!", 99));
	printf("%s", "\n");
	printf("%s", strrchr("Coucou c!", 99));
	printf("%s", "\n");
	printf("%s", ft_strrchr("\0\n", 0));
	printf("%s", "\n");
	printf("%s", strrchr("\0\n", 0));
	printf("%s", "\n");
	printf("%s", ft_strrchr("\200", 200));
	printf("%s", "\n");
	printf("%s", strrchr("\200", 200));
	printf("%s", "\n");
	printf("%s", ft_strrchr("allo", 2));
	printf("%s", "\n");
	printf("%s", strrchr("allo", 2));
	printf("%s", "\n");

	printf("%s", "FT_STRNSTR\n");
	printf("%s", ft_strnstr("salut Coucou !", "Coucou !", 8));
	printf("%s", "\n");
	printf("%s", strnstr("salut Coucou !", "Coucou !", 8));
	printf("%s", "\n");
	printf("%s", ft_strnstr("Coucou !", "Coucou !", 20));
	printf("%s", "\n");
	printf("%s", strnstr("Coucou !", "Coucou !", 20));
	printf("%s", "\n");
	printf("%s", ft_strnstr("\0\n", "\0", 4));
	printf("%s", "\n");
	printf("%s", strnstr("\0\n", "\0", 4));
	printf("%s", "\n");
	printf("%s", ft_strnstr("\200", "lo", 6));
	printf("%s", "\n");
	printf("%s", strnstr("\200", "lo", 6));
	printf("%s", "\n");
	printf("%s", ft_strnstr("allo", "ll", 2));
	printf("%s", "\n");
	printf("%s", strnstr("allo", "ll", 2));
	printf("%s", "\n");
	printf("%s", ft_strnstr("je veux une phrase.", "eu", 10));
	printf("%s", "\n");
	printf("%s", strnstr("je veux une phrase", "eu", 10));
	printf("%s", "\n");

	printf("%s", "FT_STRSTR\n");
	printf("%s", ft_strstr("Coucou !", "Coucou !"));
	printf("%s", "\n");
	printf("%s", strstr("Coucou !", "Coucou !"));
	printf("%s", "\n");
	printf("%s", ft_strstr("\0\n", "\0"));
	printf("%s", "\n");
	printf("%s", strstr("\0\n", "\0"));
	printf("%s", "\n");
	printf("%s", ft_strstr("\200", "lo"));
	printf("%s", "\n");
	printf("%s", strstr("\200", "lo"));
	printf("%s", "\n");
	printf("%s", ft_strstr("allo", "ll"));
	printf("%s", "\n");
	printf("%s", strstr("allo", "ll"));
	printf("%s", "\n");

	printf("%s", "FT_STRNCMP\n");
	printf("%d", ft_strncmp("Coucou !", "Coucou !2", 5));
	printf("%s", "\n");
	printf("%d", strncmp("Coucou !", "Coucou !2", 5));
	printf("%s", "\n");
	printf("%d", ft_strncmp("\0\n", "\0", 2));
	printf("%s", "\n");
	printf("%d", strncmp("\0\n", "\0", 2));
	printf("%s", "\n");
	printf("%d", ft_strncmp("\200", "\0", 6));
	printf("%s", "\n");
	printf("%d", strncmp("\200", "\0", 6));
	printf("%s", "\n");
	printf("%d", ft_strncmp("allo", "all ", -2));
	printf("%s", "\n");
	printf("%d", strncmp("allo", "all ", -2));
	printf("%s", "\n");

	printf("%s", "FT_TOUPPER\n");
	printf("%d", ft_toupper(98));
	printf("%s", "\n");
	printf("%d", toupper(98));
	printf("%s", "\n");
	printf("%d", ft_toupper(1200));
	printf("%s", "\n");
	printf("%d", toupper(1200));
	printf("%s", "\n");

	printf("%s", "FT_TOLOWER\n");
	printf("%d", ft_tolower(70));
	printf("%s", "\n");
	printf("%d", tolower(70));
	printf("%s", "\n");
	printf("%d", ft_tolower(1200));
	printf("%s", "\n");
	printf("%d", tolower(1200));
	printf("%s", "\n");

	printf("%s", "FT_ISPRINT\n");
	printf("%d", ft_isprint(31));
	printf("%s", "\n");
	printf("%d", isprint(31));
	printf("%s", "\n");
	printf("%d", ft_isprint(127));
	printf("%s", "\n");
	printf("%d", isprint(127));
	printf("%s", "\n");
	printf("%d", ft_isprint(32));
	printf("%s", "\n");
	printf("%d", isprint(32));
	printf("%s", "\n");
	printf("%d", ft_isprint(126));
	printf("%s", "\n");
	printf("%d", isprint(126));
	printf("%s", "\n");

	printf("%s", "FT_ISASCII\n");
	printf("%d", ft_isascii(-2));
	printf("%s", "\n");
	printf("%d", isascii(-2));
	printf("%s", "\n");
	printf("%d", ft_isascii(128));
	printf("%s", "\n");
	printf("%d", isascii(128));
	printf("%s", "\n");
	printf("%d", ft_isascii(32));
	printf("%s", "\n");
	printf("%d", isascii(32));
	printf("%s", "\n");
	printf("%d", ft_isascii(126));
	printf("%s", "\n");
	printf("%d", isascii(126));
	printf("%s", "\n");

	printf("%s", "FT_ATOI\n");
	printf("%d", ft_atoi("fsf e515"));
	printf("%s", "\n");
	printf("%d", atoi("fsf e515"));
	printf("%s", "\n");
	printf("%d", ft_atoi("	12a8"));
	printf("%s", "\n");
	printf("%d", atoi("	12a8"));
	printf("%s", "\n");
	printf("%d", ft_atoi("  -+32"));
	printf("%s", "\n");
	printf("%d", atoi("  -+32"));
	printf("%s", "\n");
	printf("%d", ft_atoi("   -126"));
	printf("%s", "\n");
	printf("%d", atoi("   -126"));
	printf("%s", "\n");
	printf("%d", ft_atoi("    -125"));
	printf("%s", "\n");
	printf("%d", atoi(" 	-125"));
	printf("%s", "\n");



	
	
	printf("FT_PUTCHAR");
	printf("\n");
	ft_putchar('i');
	printf("\n");
	printf("FT_PUTSTR");
	printf("\n");
	ft_putstr("Hello");
	printf("\n");
	ft_putstr(nul);
	printf("\n");
	ft_putnbr(-1501154);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr_fd(-1501154, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");

	printf("FT_STRTRIM\n");
	printf("%s", ft_strtrim(vide));
	printf("\n");

	printf("FT_STRSPLIT\n");
	ft_strsplit(vide, ' ');
	printf("\n");
*/
	ft_kirbydance();

	return (0);
}
