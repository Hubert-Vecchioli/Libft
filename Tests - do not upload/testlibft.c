/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testlibft.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvecchio <hvecchio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 16:06:16 by hvecchio          #+#    #+#             */
/*   Updated: 2024/05/20 01:17:15 by hvecchio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char *str = "je*suis*une*patate";
	char **splt;

	printf("\nTEST ft_split: je*suis*une*patate \n");
	splt = ft_split(str, '*');
	printf("%s\n", splt[0]);
	printf("%s\n", splt[1]);
	printf("%s\n", splt[2]);
	printf("%s\n", splt[3]);
	printf("%s\n", splt[4]);

	printf("TEST ft_memset\n");
	char str0[50];
	strcpy(str0, "Je suis une patate");
	puts(str0);
	ft_memset(str0, '$', 5);
	puts(str0);

	printf("\nTEST ft_substr\n");
	printf("Result: %s\n", ft_substr("Bonjour salut les gars", 3, 10));

	printf("\nTEST ft_memmove\n");
    char str1[50];
	char str2[50] = "Je suis une patate";	
	char str3[50];
	char str4[50] = "Je suis une patate";
	char *ret1;
	char *ret2;

	ret1 = memmove(str1, str2, 5);
	ret2 = ft_memmove(str3, str4, 5);
	printf("Original: %s\n", ret1);
	printf("Copy: %s\n", ret2);

	printf("\nTEST ft_memcpy\n");
    char dest[25]; 
    char src[] = "je suis deux papates";
    char src1[] = "je suis une patate";

    printf("Destination avant copie: %s\n", dest);
    memcpy(dest, src, strlen(src) + 1);

    printf("Copie avec memcpy de la bibliothèque standard C :\n");
    printf("Source : %s\n", src);
    printf("Destination : %s\n", dest);

 	printf("\nDestination avant copie: %s\n", dest);
    ft_memcpy(dest, src1, ft_strlen(src1) + 1);

    printf("Copie avec ft_memcpy de votre bibliothèque :\n");
    printf("Source : %s\n", src1);
    printf("Destination : %s\n", dest);

	printf("\nTEST ft_memcmp\n");
    printf("Original: %d\n", memcmp("Je suis une", "Ae suis une", 8));
 	printf("Result: %d\n", ft_memcmp("Je suis une", "Ae suis une", 8));

	printf("\nTEST ft_memchr\n");
    printf("Original: %p\n", memchr("Je suis une patate.", 'e', 5));
	printf("Result: %p\n", ft_memchr("Je suis une patate.", 'e', 5));

    printf("\nTEST ft_itoa: -98705\n");
    printf("%s\n", ft_itoa(-98705));

    printf("\nTEST ft_atoi: -94\n");
	char str5[10] = "   -94a";
    printf("Original: %d\n", atoi(str5));
    printf("Result: %d\n", ft_atoi(str5));

    printf("\nTEST ft_isalnum\n");
    printf("Original %d\n", ft_isalnum('1'));
    printf("Result %d\n", ft_isalnum('1'));
    printf("Original %d\n", ft_isalnum('d'));
    printf("Result %d\n", ft_isalnum('d'));
    printf("Original %d\n", ft_isalnum('+'));
    printf("Result %d\n", ft_isalnum('+'));

    printf("\nTEST ft_calloc\n");
	printf("Original: %p\n", calloc(5, 5));
	printf("Result: %p\n", ft_calloc(5, 5));

    printf("\nTEST ft_strdup\n");
    printf("Original: %s\n", strdup("Je suis une patate"));
	printf("Result: %s\n", ft_strdup("Je suis une patate"));

    printf("\nTEST ft_strjoin\n");
	printf("Result: %s\n", ft_strjoin("Je suis", " une patate"));


    printf("\nTEST ft_strlcat\n");
    char dest8[20] = "Je suis";
    const char *src8 = " une patate";
    size_t size8 = sizeof(dest8);

    size_t result8 = ft_strlcat(dest8, src8, size8);

    printf("Concatenated String: %s\n", dest8);
    printf("Result: %zu\n", result8);

    printf("\nTEST ft_strncmp\n");
	printf("Original: %d\n", strncmp("Je suis une patate", "Je suis une potate", 100));
	printf("Result: %d\n", ft_strncmp("Je suis une patate", "Je suis une potate", 100));

    printf("\nTEST ft_strnstr\n");
	printf("Original: %s\n", strstr("Je suis une patate", "at"));
	printf("Result: %s\n", ft_strnstr("Je suis une patate", "at", 18));

    printf("\nTEST ft_strchr\n");
    printf("Result: %s\n", strchr("Je suis une patate", 'a'));
    printf("Result: %s\n", ft_strchr("Je suis une patate", 'a'));

    printf("\nTEST ft_strrchr\n");
	printf("Original: %s\n", strrchr("Je suis une patate", 'a'));
	printf("Result: %s\n", ft_strrchr("Je suis une patate", 'a'));

    printf("\nTEST ft_strtrim\n");
	printf("Result: %s\n", ft_strtrim("Je suis une patate", "te"));

    printf("\nTEST ft_tolower\n");
    printf("Original: %d\n", tolower('A'));
    printf("Result: %d\n", ft_tolower('A'));
    printf("Original: %d\n", tolower('a'));
    printf("Result: %d\n", ft_tolower('a'));
    printf("Original: %d\n", tolower('/'));
    printf("Result: %d\n", ft_tolower('/'));

    printf("\nTEST ft_toupper\n");
    printf("Original: %d\n", toupper('A'));
    printf("Result: %d\n", ft_toupper('A'));
    printf("Original: %d\n", toupper('a'));
    printf("Result: %d\n", ft_toupper('a'));
    printf("Original: %d\n", toupper('/'));
    printf("Result: %d\n", ft_toupper('/'));

	return (0);
}
