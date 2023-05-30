/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:10:25 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 22:35:49 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
    public:
        Cat();
        ~Cat();
        Cat( const Cat& copy );
        Cat& operator=( const Cat& a );

        
        void   makeSound() const;
        
    private:
        Brain *brain;
};

#endif 