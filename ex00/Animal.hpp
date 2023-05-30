/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:28:35 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 21:32:45 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    public:
        Animal();
        virtual ~Animal();
        Animal(std::string type);
        Animal(const Animal& copy);
        Animal& operator=(const Animal& a);
        
        virtual void    makeSound( void ) const;
        std::string     getType( void ) const; 
    protected:
        std::string type;
};

#endif