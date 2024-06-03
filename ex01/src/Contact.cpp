/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 12:51:15 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/03 16:51:09 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact(void)
{
    firstName = "";
    lastName = "";
    nickname = "";
    phoneNumber = "";
    darkestSecret = "";
}

Contact::~Contact(void)
{
    return;
}

void Contact::setFirstName(std::string firstName)
{
    firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    lastName = lastName;
}

void Contact::setNickname(std::string lastName)
{
    lastName = lastName;
}

void Contact::setPhoneNumber(std::string lastName)
{
    lastName = lastName;
}

void Contact::setDarkestSecret(std::string lastName)
{
    lastName = lastName;
}

std::string Contact::getFirstName(void) const
{
    return firstName;
}

std::string Contact::getLastName(void) const
{
    return lastName;
}

std::string Contact::getNickname(void) const
{
    return nickname;
}

std::string Contact::getPhoneNumber(void) const
{
    return phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
    return darkestSecret;
}

Contact Contact::getContactInfo(void) const 
{
    return (*this);
}