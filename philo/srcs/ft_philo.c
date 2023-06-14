/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_philo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cscelfo <cscelfo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 15:15:21 by cscelfo           #+#    #+#             */
/*   Updated: 2023/06/14 18:09:39 by cscelfo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int main(int ac, char **av)
{
    bool    optional;
    t_data  *data;

    optional = false;
    data = NULL;
    if (ac == 6)
        optional = true; // if optional argument is used
    else if (ac < 5 || ac > 6)
        return(ft_error());
    if (!ft_check_errors(ac, av))
    {
        data = ft_init_data(ac, av);
        //create threads, philosophers and loop.
    }
    else
        return (ft_error() + 1);
    return (0);
}