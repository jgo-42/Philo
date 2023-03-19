/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgo <jgo@student.42seoul.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:33:47 by jgo               #+#    #+#             */
/*   Updated: 2023/03/19 10:17:09 by jgo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

/* init.c */
t_bool init(t_meta *meta, int ac, char **av);

/* time.c */
uint64_t get_ms_time(void);

/* utils.c */
int	char_to_uint64(const char *str);
t_bool	check_args(t_meta *meta);

#endif