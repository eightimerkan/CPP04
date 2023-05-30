/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 22:21:27 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/30 15:00:46 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
    public:
        AAnimal();
        AAnimal( std::string type );
        virtual ~AAnimal();
        AAnimal(const AAnimal& copy );
        AAnimal& operator=( const AAnimal& a );

        virtual void    makeSound() const = 0;
        std::string     getType() const;
    protected:
        std::string type;
};

#endif