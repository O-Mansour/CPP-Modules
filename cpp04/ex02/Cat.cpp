/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:11 by omansour          #+#    #+#             */
/*   Updated: 2023/12/17 10:10:19 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), CatBrain(new Brain) {
	std::cout << "It's the default constructor of Cat" << std::endl;
	type = "Cat";
}

Cat::Cat(const Cat& other) : Animal(), CatBrain(new Brain) {
	std::cout << "It's the copy constructor of Cat" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other)
	{
		type = other.type;
		*CatBrain = *(other.CatBrain);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "It's the destructor of Cat" << std::endl;
	delete CatBrain;
}

void	Cat::makeSound() const {
	std::cout << "Meow..." << std::endl;
}
