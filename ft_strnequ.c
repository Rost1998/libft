/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtulchiy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:38:40 by rtulchiy          #+#    #+#             */
/*   Updated: 2017/11/05 13:08:00 by rtulchiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return (-1);
	while ((*s1 != '\0' || *s2 != '\0') && n--)
		if (*s1++ != *s2++)
			return (0);
	return (1);
}
