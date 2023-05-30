/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:28:44 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/30 14:52:11 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type( "Animal" )
{
    std::cout << this->type << " constructor called" << std::endl;
}

Animal::Animal( std::string type ) : type( type )
{
    std::cout << "Animal " << this->type << " constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal& copy )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal& Animal::operator=( const Animal& a )
{
    std::cout << "Animal assignment operator called" << std::endl;
    if ( this != &a )
    {
        this->type = a.type;
    }
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound called" << std::endl;
}

std::string    Animal::getType() const
{
    return this->type;
}