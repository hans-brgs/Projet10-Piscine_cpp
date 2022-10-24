/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourgeo <hbourgeo@student.19.be>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:11:28 by hbourgeo          #+#    #+#             */
/*   Updated: 2022/10/24 17:11:28 by hbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) :  _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << _name
			<< ":  BraiiiiiiinnnzzzZ..." 
			<< std::endl;
	return ;
}

