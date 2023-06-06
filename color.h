/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: injah <injah@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:12:49 by injah             #+#    #+#             */
/*   Updated: 2023/06/06 17:17:22 by injah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H
# define COLOR_H

# include <stdio.h>

# define RESET   "\x1B[0m"
# define BLACK   "\x1B[30m"
# define RED     "\x1B[31m"
# define GREEN   "\x1B[32m"
# define YELLOW  "\x1B[33m"
# define BLUE    "\x1B[34m"
# define MAGENTA "\x1B[35m"
# define CYAN    "\x1B[36m"
# define WHITE   "\x1B[37m"

# define BO_BLACK   "\x1B[1m\x1B[30m"
# define BO_RED     "\x1B[1m\x1B[31m"
# define BO_GREEN   "\x1B[1m\x1B[32m"
# define BO_YELLOW  "\x1B[1m\x1B[33m"
# define BO_BLUE    "\x1B[1m\x1B[34m"
# define BO_MAGENTA "\x1B[1m\x1B[35m"
# define BO_CYAN    "\x1B[1m\x1B[36m"
# define BO_WHITE   "\x1B[1m\x1B[37m"

# define BG_BLACK   "\x1B[40m"
# define BG_RED     "\x1B[41m"
# define BG_GREEN   "\x1B[42m"
# define BG_YELLOW  "\x1B[43m"
# define BG_BLUE    "\x1B[44m"
# define BG_MAGENTA "\x1B[45m"
# define BG_CYAN    "\x1B[46m"
# define BG_WHITE   "\x1B[47m"

# define BGO_BLACK   "\x1B[1m\x1B[40m"
# define BGO_RED     "\x1B[1m\x1B[41m"
# define BGO_GREEN   "\x1B[1m\x1B[42m"
# define BGO_YELLOW  "\x1B[1m\x1B[43m"
# define BGO_BLUE    "\x1B[1m\x1B[44m"
# define BGO_MAGENTA "\x1B[1m\x1B[45m"
# define BGO_CYAN    "\x1B[1m\x1B[46m"
# define BGO_WHITE   "\x1B[1m\x1B[47m"

#endif