/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleonard <mleonard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:22:07 by mleonard          #+#    #+#             */
/*   Updated: 2024/06/03 22:18:55 by mleonard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <Contact.hpp>
#include <iostream>
#include <iomanip>

class Phonebook
{
private:
    static const int maxContacts = 8;
    Contact contacts[maxContacts];
    int contactCount;

public:
    Phonebook(void);
    ~Phonebook(void);

    void addContact(Contact contact);
    const Contact *getContacts(void) const;
    const Contact getContact(int index) const;
    size_t length(void) const;
    void displayContacts(void) const;
    void displayContact(size_t index) const;
};

#endif