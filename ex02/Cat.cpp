/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:09:48 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 22:33:26 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << this->type << " constructor called" << std::endl;
    this->brain = new Brain();
}

Cat::~Cat()
{
    std::cout << this->type << " destructor called" << std::endl;
    delete this->brain;
}

void    Cat::makeSound() const
{
    std::cout << "Miyav!" << std::endl;
}

Cat::Cat( const Cat& copy )
{
    *this = copy;
}

Cat& Cat::operator=( const Cat& a )
{
    std::cout << "Cat copy called." << std::endl;
    if (this != &a)
    {
        this->type = a.type;
        this->brain = new Brain( *a.brain );
    }
    return *this;
}