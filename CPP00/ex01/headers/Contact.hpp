#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    private:
        std::string name;
        std::string lastname;
        std::string nickname;
        std::string number;
        std::string secret;
    public:
        void setData(const std::string& name = "", const std::string& lastname = "", 
                    const std::string& nickname = "", const std::string& number = "",
                    const std::string& secret = "");
        void displayData() const;
};

#endif
