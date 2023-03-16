/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:42:09 by jgo               #+#    #+#             */
/*   Updated: 2023/03/16 15:51:38 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include "defines.h"

static char *get_state_msg(t_state state)
{
	if (state == FORK)
		return (FORK_MSG);
    else if (state == EAT)
		return (EAT_MSG);
	else if (state == SLEEP)
		return (SLEEP_MSG);
	else if (state == THINK)
		return (THINK_MSG);
	return (DIED_MSG);
}

void    output(uint64_t time, int num ,t_state state)
{
	// lock
    printf("%llu %d %s", time, X, get_state_msg(state));
	// unlock
}
