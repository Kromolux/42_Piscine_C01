/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufmann@student.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 23:40:47 by rkaufman          #+#    #+#             */
/*   Updated: 2021/10/03 23:52:50 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;

	i = 0;
	n = (int) size / 2;
	while (i < n)
	{
		ft_swap(&tab[i], &tab[size - (i + 1)]);
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}
