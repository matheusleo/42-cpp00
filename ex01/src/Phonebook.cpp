/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:34:57 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/03 17:35:54 by mleonard         ###   ########.fr       */
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