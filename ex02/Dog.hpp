/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:14:17 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 22:36:02 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& copy);
        Dog& operator=(const Dog& a);

        void   makeSound() const;

    private:
        Brain *brain;
};

#endif