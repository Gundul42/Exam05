/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:33:39 by graja             #+#    #+#             */
/*   Updated: 2022/03/24 15:41:37 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_H
# define DUMMY_H

# include "ATarget.hpp"

class Dummy : public ATarget
{
	Dummy(void);
	~Dummy(void);

	ATarget *	clone(void) const;
};

#endif
