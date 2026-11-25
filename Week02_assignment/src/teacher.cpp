#include <iostream>
#include <string>
#include <vector>
#include "user.hpp"
#include "teacher.hpp"


Teacher::Teacher(int ID, const std::string &NAME, int SALARY, const std::string &EMAIL, const std::string &SUBJECT, const std::vector<int> &ASSIGNED_GROUPS)
: User(ID, NAME), salary(SALARY), email(EMAIL), subject(SUBJECT), assigned_groups(ASSIGNED_GROUPS){}

void Teacher::GetInfo() const {
    std::cout << "ID: " << id << "\nNAME: " << name << "\nSALARY: " << salary <<"\nE-MAIL: " << email << "\nSUBJECT: " << subject << "\n";
    std::cout << "ASSIGNED GROUPS: ";
    for (const auto &x: assigned_groups){
        std::cout << x << " ";
    }
    std::cout << "\n";
}

void Teacher::PromoteTeacher(int new_salary){
    salary = new_salary;
}