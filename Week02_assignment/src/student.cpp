#include <iostream>
#include <string>
#include "user.hpp"
#include "student.hpp"


Student::Student(int ID, const std::string &NAME, int GRADE_LEVEL, int GROUP, const std::unordered_map<std::string, int> &GRADES)
: User(ID, NAME), grade_level(GRADE_LEVEL), group(GROUP), grades(GRADES){}

void Student::GetInfo() const {
    std::cout << "ID: " << id << "\nNAME: " << name << "\nGRADE LEVEL: " << grade_level << "\nGROUP: " << group << "\n";
    std::cout << "GRADES: \n";
    for (const auto &x: grades){
        std::cout << x.first << ": " << x.second << "\n";
    }
}

void Student::PassToNextGrade(){
    if (grades.empty()){
        std::cout << "No grades available yet! \n";
        return;
    }
    int nb_grades {0};
    double sum {0.0};
    double passing_grade {60.0};
    for (const auto &x: grades){
        sum += x.second;
        nb_grades += 1;
    }
    if (sum / nb_grades >= passing_grade){
        std::cout << name << " has good enough grades to pass! \n";
    }
    else{
        std::cout << name << " does not pass! \n";
    }
}