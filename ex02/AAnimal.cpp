/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:21:30 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 22:37:36 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type( "AAnimal" )
{
    std::cout << this->type << " constructor called" << std::endl;
}

AAnimal::AAnimal( std::string type ) : type( type )
{
    std::cout << "AAnimal " << this->type << " constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& copy )
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = copy;
}

AAnimal& AAnimal::operator=( const AAnimal& a )
{
    std::cout << "<AAnimal assignment operator called" << std::endl;
    if ( this != &a )
    {
        this->type = a.type;
    }
    return *this;
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal makeSound called" << std::endl;
}

std::string    AAnimal::getType() const
{
    return this->type;
}