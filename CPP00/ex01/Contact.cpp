#include "headers/Contact.hpp"


Contact::Contact()
{
    for(int i = 0; i < 5; i++)
        str[i] = "";
}

void Contact::setData(const std::string& name, const std::string& lastname, 
                        const std::string& nickname, const std::string& number,
                        const std::string& secret)
{
    str[0] = name;
    str[1] = lastname;
    str[2] = nickname;
    str[3] = number;
    str[4] = secret;
}

void Contact::displayData() const
{
    std::cout << "Name: " << str[0] << std::endl;
    std::cout << "Lastname: " << str[1] << std::endl;
    std::cout << "Nickname: " << str[2] << std::endl;
    std::cout << "Number: " << str[3] << std::endl;
    std::cout << "Secret: " << str[4] << std::endl;
}
