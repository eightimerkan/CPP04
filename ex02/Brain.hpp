/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:37:41 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 21:42:09 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();
        Brain( const Brain& copy );
        Brain& operator=( const Brain& a);

    private:
        std::string ideas[100];

};
 
#endif