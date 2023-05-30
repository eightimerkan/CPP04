/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:12:56 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 21:51:10 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" )
{
    std::cout << this->type << " constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << this->type << " destructor called" << std::endl;
    delete this->brain;
}

void    Dog::makeSound() const
{
    std::cout << "HavHav!" << std::endl;
}

Dog::Dog( const Dog& copy )
{
    *this = copy;
}

Dog& Dog::operator=( const Dog& a )
{
    std::cout << "Dog copy called." << std::endl;
    if (this != &a)
    {
        this->type = a.type;
        this->brain = new Brain( *a.brain );
    }
    return *this;
}