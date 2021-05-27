/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acortes- <acortes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 11:42:05 by acortes-          #+#    #+#             */
/*   Updated: 2021/05/27 11:42:06 by acortes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
    brain = new Brain();
}

Human::~Human() {delete this->brain;}

Brain       &Human::getBrain() { return (*this->brain); }
