#include "Contact.hpp"

std::string Contact::getFirstName(){
    return _firstName;
}
std::string Contact::getLastName(){
    return _lastName;
}
std::string Contact::getNickname(){
    return _nickname;
}
std::string Contact::getPhoneNum(){
    return _phoneNum;
}
std::string Contact::getDarkestSecret(){
    return _darkestSecret;
}

void Contact::setFirstName(std::string firstName){
    this->_firstName = firstName;
}
void Contact::setLastName(std::string lastName){
    this->_lastName = lastName;
}
void Contact::setNickname(std::string nickname){
    this->_nickname = nickname;
}
void Contact::setPhoneNum(std::string phoneNum){
    this->_phoneNum = phoneNum;
}
void Contact::setDarkestSecret(std::string darkSecret){
    this->_darkestSecret = darkSecret;
}