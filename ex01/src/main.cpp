#include <Contact.hpp>
#include <Phonebook.hpp>
#include <iostream>
#include <iomanip>

void handleAddCommand(Phonebook &phonebook)
{
    Contact contact;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    while (true)
    {
        std::cout << "Enter the first name: ";
        std::getline(std::cin, firstName);
        if (firstName.empty())
            std::cout << "First name cannot be empty." << std::endl;
        else
            break;
    }
    contact.setFirstName(firstName);

    while (true)
    {
        std::cout << "Enter the last name: ";
        std::getline(std::cin, lastName);
        if (lastName.empty())
            std::cout << "Last name cannot be empty." << std::endl;
        else
            break;
    }
    contact.setLastName(lastName);

    while (true)
    {
        std::cout << "Enter the nickname: ";
        std::getline(std::cin, nickname);
        if (nickname.empty())
            std::cout << "Nickname cannot be empty." << std::endl;
        else
            break;
    }
    contact.setNickname(nickname);

    while (true)
    {
        std::cout << "Enter the phone number: ";
        std::getline(std::cin, phoneNumber);
        if (phoneNumber.empty())
            std::cout << "Phone number cannot be empty." << std::endl;
        else
            break;
    }
    contact.setPhoneNumber(phoneNumber);

    while (true)
    {
        std::cout << "Enter the darkest secret: ";
        std::getline(std::cin, darkestSecret);
        if (darkestSecret.empty())
            std::cout << "Darkest secret cannot be empty." << std::endl;
        else
            break;
    }
    contact.setDarkestSecret(darkestSecret);

    phonebook.addContact(contact);
    std::cout << "Contact '"
              << contact.getFirstName()
              << "' added sucessfully!" << std::endl;
}

void handleSearchCommand(Phonebook &phonebook)
{
    size_t contactIndex;

    if (phonebook.length() == 0)
    {
        std::cout << phonebook.length() << std::endl;
        std::cout << "No contacts available." << std::endl;
        return;
    }

    while (true)
    {
        phonebook.displayContacts();
        std::cout << "Select a contact OR enter any input to return to main menu: ";
        std::cin >> contactIndex;
        if (std::cin.fail() || contactIndex >= phonebook.length())
        {
            std::cin.clear();
            std::cin.ignore();
            break;
        }
        std::cout << std::endl;
        phonebook.displayContact(contactIndex);
        std::cout << std::endl;
    }
}

void handleExitCommand()
{
    std::cout << "Goodbye!" << std::endl;
}

int main(void)
{
    std::string command;
    Phonebook phonebook;

    while (true)
    {
        std::cout << "Enter a command (ADD/SEARCH/EXIT): ";
        std::getline(std::cin, command);
        std::cout << std::endl;
        if (command == "ADD" || command == "add")
            handleAddCommand(phonebook);
        else if (command == "SEARCH" || command == "search")
            handleSearchCommand(phonebook);
        else if (command == "EXIT" || command == "exit")
        {
            handleExitCommand();
            break;
        }
        else
            std::cout << "Insert a valid command." << std::endl;
        std::cout << std::endl;
    }
}