/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:37:44 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 21:43:07 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created." << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain( const Brain& copy )
{
    *this = copy;
}

Brain& Brain::operator=( const Brain& a )
{
    std::cout << "Brain copy called." << std::endl;
    if ( this != &a )
    {
        for ( int i = 0; i < 100; i++ ) {
            this->ideas[i] = a.ideas[i];
        }
    }
    return *this;
}
