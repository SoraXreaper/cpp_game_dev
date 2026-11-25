#pragma once
#include <string>
#include <vector>
#include "user.hpp"
#include "student.hpp"
#include "teacher.hpp"

class School{
    private:
        int id;
        bool is_public;
        int max_capacity;
        std::string name;
        std::string address;
        std::string city;
        std::vector<std::string> available_subjects;
        std::vector<Teacher> teachers;
        std::vector<Student> students;

    public:
        School(int ID, bool IS_PUBLIC, int MAX_CAPACITY, const std::string &NAME, const std::string &ADDRESS, const std::string &CITY, const std::vector<std::string> &AVAILABLE_SUBJECTS);
        void HireTeacher(Teacher teacher);
        void EnrollStudent(Student student);
        void AddSubject(std::string subject);
        void PrintAllSubjects() const;
        void PrintStudentsCount() const;
};