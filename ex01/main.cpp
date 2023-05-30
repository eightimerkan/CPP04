/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eightimerkan <eightimerkan@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 21:52:00 by eightimerka       #+#    #+#             */
/*   Updated: 2023/05/28 21:55:11 by eightimerka      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(  )
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    Dog basic;
    Dog tmp = basic;

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ )
    {
        delete animals[i];
    }
    system("leaks a.out");
    return 0;
}