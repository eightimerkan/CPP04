/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:12:56 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 21:13:07 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" )
{
    std::cout << this->type << " constructor called" << std::endl;
}

Dog::~Dog()
{
    std::cout << this->type << " destructor called" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "HavHav!" << std::endl;
}