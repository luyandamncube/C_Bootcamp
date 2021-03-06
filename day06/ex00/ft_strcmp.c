/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 17:06:37 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/17 14:48:10 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int k;

	k = 0;
	while (s1[k] == s2[k] && s1[k] != '\0' && s2[k] != '\0')
		k++;
	return (s1[k] - s2[k]);
}
