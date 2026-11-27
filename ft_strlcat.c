/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahautefe <ahautefe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 08:39:00 by ahautefe          #+#    #+#             */
/*   Updated: 2026/11/27 06:52:24 by ahautefe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char	*s);

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len_dest;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	len_dest = i;
	while (i + 1 < size && src[j])
	{
		dst[i] = src[j];
		j++;
		i++;
		if (i + 1 == size || !src[j])
			dst[i] = '\0';
	}
	if (size <= len_dest)
		return (size + ft_strlen(src));
	else
		return (len_dest + ft_strlen(src));
}
/*

The ft_strlcpy() and ft_strlcat() functions copy and concatenate strings
respectively.They are designed to be safer, more consistent, and less error
prone replacements for strncpy(3) and strncat(3).  Unlike those functions,
strlcpy() and strlcat() take the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as size is larger than 0
or, in the case of strlcat(), as long as there is at least one byte free in dst).
Note that a byte for the NUL should be included in size. Also note that strlcpy()
and strlcat() only operate on true “C” strings. This means that for strlcpy() src
must be NUL-terminated and for strlcat() both src and dst must be NUL-terminated.
*/

// Doit copier src a la fin de dest, dans la limite de size caracteres
// renvoie la taille totale de la phrase quil a essaye de copier
// si size < dest, la longueur de dest initiale est considere
// 	 comme = a size (pour le calcul du retour)
// le size en parametre compte le \0 de fin de chaine
/*

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	dest [10] = "DEST";
	char	src[50] = "SOURCE";

	printf("%s\n", dest);
	printf("%s\n", src);
	printf("%zu %s %s\n ", ft_strlcat(dest, src, 10), dest, src);

	return (0);
}
*/
