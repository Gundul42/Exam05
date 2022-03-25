/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: graja <graja@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:33:39 by graja             #+#    #+#             */
/*   Updated: 2022/03/25 10:26:49 by graja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_H
# define DUMMY_H

# include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy(void);
		~Dummy(void);

		ATarget *	clone(void) const;
};

#endif
