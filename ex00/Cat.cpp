/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:09:48 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 21:10:13 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << this->type << " constructor called" << std::endl;
}

Cat::~Cat()
{
    std::cout << this->type << " destructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Miyav!" << std::endl;
}