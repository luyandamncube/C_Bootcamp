/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/22 14:56:37 by lmncube           #+#    #+#             */
/*   Updated: 2018/01/22 18:08:02 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		k;
	int		flag;

	k = 0;
	flag = 0;
	while (tab[k] != 0)
	{
		if (f(tab[k]) == 1)
		{
			flag++;
		}
		k++;
	}
	return (flag);
}
