/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:34:52 by jgo               #+#    #+#             */
/*   Updated: 2023/03/23 19:52:14 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
#include "def.h"
#include "utils.h"
#include "error.h"
#include "set_meta.h"
#include "life.h"

void	test_queue(char *msg)
{
	if (msg)
	{
		printf("%s\n", msg);
		free(msg);
	}
}

static void life_goes_on_until_death(t_clerk *clerk)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		test_queue(clerk->deque->pop_front(clerk->deque));
		i++;
	}
}

// number_of_philosophers
// time_to_die
// time_to_eat
// time_to_sleep
// number_of_times_each_philosopher_must_eat
// philosopher
int main(int ac, char **av)
{
	t_meta meta;

	if (ac < 5 || 6 < ac)
		return (prt_err(ERR_ARGS, SET_ERROR));
	set_meta(&meta, ac, av);
	be_born_philo(&meta);
	life_goes_on_until_death(&meta.clerk);
	
	// garbage_collector();
	return (EXIT_SUCCESS);
}