/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:51:15 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/03 21:32:44 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact(void)
{
    this->firstName = "";
    this->lastName = "";
    this->nickname = "";
    this->phoneNumber = "";
    this->darkestSecret = "";
}

Contact::~Contact(void)
{
    return;
}

void Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void) const
{
    return this->firstName;
}

std::string Contact::getLastName(void) const
{
    return this->lastName;
}

std::string Contact::getNickname(void) const
{
    return this->nickname;
}

std::string Contact::getPhoneNumber(void) const
{
    return this->phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
    return this->darkestSecret;
}

Contact Contact::getContactInfo(void) const
{
    return (*this);
}