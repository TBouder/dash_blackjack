/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouder <tbouder@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 15:00:58 by tbouder           #+#    #+#             */
/*   Updated: 2016/06/10 15:33:24 by tbouder          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			black_jack_hand(char *s)
{
	int		i;
	int		r;
	int		nb_as;

	i = 0;
	r = 0;
	nb_as = 0;
	while (s[i])
	{
		s[i] >= '2' && s[i] <= '9' ? r += s[i] - '0': 0;
		s[i] == 'T' || s[i] == 'J' || s[i] == 'D' || s[i] == 'K' ? r += 10 : 0;
		s[i] == 'A' ? nb_as++ : 0;
		i++;
	}
	while (nb_as)
	{
		r += r + 11 > 21 ? 1 : 11;
		nb_as--;
	}
	return (r);
}
