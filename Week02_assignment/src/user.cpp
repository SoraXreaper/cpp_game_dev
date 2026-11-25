#include <iostream>
#include "user.hpp"


User::User(int ID, const std::string &NAME) : id(ID), name(NAME){}

void User::GetInfo() const{
    std::cout << "ID: " << id << "\n" << "NAME: " << name << "\n";
}

std::string User::GetName() const{
    return name;
}