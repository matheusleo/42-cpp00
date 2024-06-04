/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:34:57 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/03 23:00:54 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>

Phonebook::Phonebook(void)
{
    contactCount = 0;
}

Phonebook::~Phonebook(void)
{
    return;
}

void Phonebook::addContact(Contact contact)
{
    contacts[contactCount % maxContacts] = contact;
    contactCount++;
}

const Contact *Phonebook::getContacts(void) const
{
    return contacts;
}

const Contact Phonebook::getContact(int index) const
{
    return contacts[index];
}

size_t Phonebook::length(void) const
{
    size_t count = 0;

    for (size_t i = 0; i < maxContacts; i++)
    {
        if (!contacts[i].getFirstName().empty())
            count++;
    }
    return count;
}

void Phonebook::displayContacts(void) const
{
    std::cout << "|----------+----------+----------+----------|" << std::endl;
    std::cout << "|";
    std::cout << std::setw(10) << std::right << "index" << "|";
    std::cout << std::setw(10) << std::right << "first name" << "|";
    std::cout << std::setw(10) << std::right << "last name" << "|";
    std::cout << std::setw(10) << std::right << "nickname" << "|" << std::endl;
    std::cout << "|----------+----------+----------+----------|" << std::endl;

    for (size_t i = 0; i < length(); i++)
    {
        Contact contact = contacts[i];
        std::string firstName = contact.getFirstName().length() > 10
                                    ? contact.getFirstName().substr(0, 9).append(".")
                                    : contact.getFirstName();
        std::string lastName = contact.getLastName().length() > 10
                                   ? contact.getLastName().substr(0, 9).append(".")
                                   : contact.getLastName();
        std::string nickname = contact.getNickname().length() > 10
                                   ? contact.getNickname().substr(0, 9).append(".")
                                   : contact.getNickname();

        std::cout << "|";
        std::cout << std::setw(10) << std::right << i << "|";
        std::cout << std::setw(10) << std::right << firstName << "|";
        std::cout << std::setw(10) << std::right << lastName << "|";
        std::cout << std::setw(10) << std::right << nickname << "|" << std::endl;
        std::cout << "|----------+----------+----------+----------|" << std::endl;
    }
}

void Phonebook::displayContact(size_t index) const
{
    Contact contact = this->contacts[index];

    std::cout << "First name: " << contact.getFirstName() << std::endl;
    std::cout << "Last name: " << contact.getLastName() << std::endl;
    std::cout << "Nickname: " << contact.getNickname() << std::endl;
    std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
    std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}