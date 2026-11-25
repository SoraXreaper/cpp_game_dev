#include <iostream>
#include <string>
#include <vector>
#include "school.hpp"



School::School(int ID, bool IS_PUBLIC, int MAX_CAPACITY, const std::string &NAME, const std::string &ADDRESS, const std::string &CITY, const std::vector<std::string> &AVAILABLE_SUBJECTS)
: id(ID), is_public(IS_PUBLIC), max_capacity(MAX_CAPACITY), name(NAME), address(ADDRESS), city(CITY), available_subjects(AVAILABLE_SUBJECTS){}


void School::HireTeacher(Teacher teacher){
    teachers.push_back(teacher);
    std::cout << "Teacher " << teacher.GetName() << " added!\n";
}
void School::EnrollStudent(Student student){
    students.push_back(student);
    std::cout << "Student " << student.GetName() << " added!\n";
}
void School::AddSubject(std::string subject){
    available_subjects.push_back(subject);
    std::cout << subject << " added! \n";
}
void School::PrintAllSubjects() const{
    std::cout << "Available Subjects: \n";
    for (const auto &x: available_subjects){
        std::cout << x << "\n";
    }
}
void School::PrintStudentsCount() const{
    std::cout << "Number of students: " << students.size() << "\n";
}