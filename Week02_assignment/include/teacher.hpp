#pragma once
#include <string>
#include <vector>
#include "user.hpp"

class Teacher: public User{
    private:
        int salary;
        std::string email;
        std::string subject;
        std::vector<int> assigned_groups;
    public:
        Teacher(int ID, const std::string &NAME, int SALARY, const std::string &EMAIL, const std::string &SUBJECT, const std::vector<int> &ASSIGNED_GROUPS);
        void GetInfo() const override;
        void PromoteTeacher(int new_salary);
};