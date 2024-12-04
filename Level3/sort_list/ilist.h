/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ilist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 19:53:57 by alejhern          #+#    #+#             */
/*   Updated: 2024/12/04 20:11:53 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ILIST_H
# define ILIST_H

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}					t_list;

#endif
