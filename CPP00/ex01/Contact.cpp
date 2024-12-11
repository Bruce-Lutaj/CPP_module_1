#include "headers/Contact.hpp"

void Contact::setData(const std::string& name, const std::string& lastname, 
                        const std::string& nickname, const std::string& number,
                        const std::string& secret)
{
    this->name = name;
    this->lastname = lastname;
    this->nickname = nickname;
    this->number = number;
    this->secret = secret;
}

void Contact::displayData() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Lastname: " << lastname << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Number: " << number << std::endl;
    std::cout << "Secret: " << secret << std::endl;
}
