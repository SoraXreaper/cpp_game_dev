#pragma once
#include <string>
#include <unordered_map>
#include "user.hpp"

class Student: public User{
    private:
        int grade_level;
        int group;
        std::unordered_map<std::string, int> grades;
    public:
        Student(int ID, const std::string &NAME, int GRADE_LEVEL, int GROUP, const std::unordered_map<std::string, int> &GRADES);
        void GetInfo() const override;
        void PassToNextGrade();
};