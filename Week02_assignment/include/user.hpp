#pragma once
#include <string>

class User{
    protected:
        int id;
        std::string name;
    public:
        User(int ID, const std::string &NAME);
        virtual ~User() = default;

        virtual void GetInfo() const;

        std::string GetName() const;
};