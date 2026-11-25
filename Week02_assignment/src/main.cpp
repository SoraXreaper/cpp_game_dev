#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <random>
#include "school.hpp"
#include "student.hpp"
#include "teacher.hpp"
#include "user.hpp"






int main(){
    std::random_device seed;
    std::mt19937 engine { seed() };
    std::uniform_int_distribution<int> dist(1, 9999);

    int student_a_id {dist(engine)};
    std::string student_a_name {"Alice Muller"};
    int student_a_grade_level {2};
    int student_a_group {202};
    std::unordered_map<std::string, int> student_a_grades = {{"Math", 67}, {"Science", 78}, {"Literature", 88}};
    Student student_a = Student(student_a_id, student_a_name, student_a_grade_level, student_a_group, student_a_grades);
    student_a.GetInfo();
    student_a.PassToNextGrade();

    int student_b_id {dist(engine)};
    std::string student_b_name {"Felix Garcia"};
    int student_b_grade_level {3};
    int student_b_group {301};
    std::unordered_map<std::string, int> student_b_grades = {{"Math", 78}, {"Science", 85}, {"Literature", 64}};
    Student student_b = Student(student_b_id, student_b_name, student_b_grade_level, student_b_group, student_b_grades);
    student_b.GetInfo();
    student_b.PassToNextGrade();

    int student_c_id {dist(engine)};
    std::string student_c_name {"Michael Lee"};
    int student_c_grade_level {1};
    int student_c_group {103};
    std::unordered_map<std::string, int> student_c_grades = {{"Math", 70}, {"Geography", 58}, {"Literature", 42}};
    Student student_c = Student(student_c_id, student_c_name, student_c_grade_level, student_c_group, student_c_grades);
    student_c.GetInfo();
    student_c.PassToNextGrade();

    int student_d_id {dist(engine)};
    std::string student_d_name {"Arthur Patel"};
    int student_d_grade_level {1};
    int student_d_group {103};
    std::unordered_map<std::string, int> student_d_grades = {{"Math", 83}, {"Geography", 70}, {"Literature", 76}};
    Student student_d = Student(student_d_id, student_d_name, student_d_grade_level, student_d_group, student_d_grades);
    student_d.GetInfo();
    student_d.PassToNextGrade();

    int teacher_a_id {dist(engine)};
    int teacher_a_salary {72'000};
    std::string teacher_a_name {"Paul Smith"};
    std::string teacher_a_email {"paul_smith2245@gmail.com"};
    std::string teacher_a_subject {"Math"};
    std::vector<int> teacher_a_assigned_groups = {103, 202, 301};
    Teacher teacher_a = Teacher(teacher_a_id, teacher_a_name, teacher_a_salary, teacher_a_email, teacher_a_subject, teacher_a_assigned_groups);
    teacher_a.GetInfo();

    int teacher_b_id {dist(engine)};
    int teacher_b_salary {70'000};
    std::string teacher_b_name {"Melissa Nguyen"};
    std::string teacher_b_email {"melissa1994@gmail.com"};
    std::string teacher_b_subject {"Literature"};
    std::vector<int> teacher_b_assigned_groups = {103, 202, 301};
    Teacher teacher_b = Teacher(teacher_b_id, teacher_b_name, teacher_b_salary, teacher_b_email, teacher_b_subject, teacher_b_assigned_groups);
    teacher_b.GetInfo();

    int teacher_c_id {dist(engine)};
    int teacher_c_salary {65'000};
    std::string teacher_c_name {"Dean O'Connor"};
    std::string teacher_c_email {"theRealDeanO_o@hotmail.com"};
    std::string teacher_c_subject {"Science"};
    std::vector<int> teacher_c_assigned_groups = {202, 301};
    Teacher teacher_c = Teacher(teacher_c_id, teacher_c_name, teacher_c_salary, teacher_c_email, teacher_c_subject, teacher_c_assigned_groups);
    teacher_c.GetInfo();

    int teacher_d_id {dist(engine)};
    int teacher_d_salary {60'000};
    std::string teacher_d_name {"Roy Tremblay"};
    std::string teacher_d_email {"the_real_roy_tremblay31@gmail.com"};
    std::string teacher_d_subject {"Geography"};
    std::vector<int> teacher_d_assigned_groups = {103};
    Teacher teacher_d = Teacher(teacher_d_id, teacher_d_name, teacher_d_salary, teacher_d_email, teacher_d_subject, teacher_d_assigned_groups);
    teacher_d.GetInfo();
    teacher_d.PromoteTeacher(65'000);

    int school_id {dist(engine)};
    bool school_is_public {true};
    int school_max_capacity {200};
    std::string school_name {"Pinehurst Elementary School"};
    std::string school_address {"135 Wellington Avenue"};
    std::string school_city {"Denver"};
    std::vector<std::string> available_subjects = {"Math", "Literature", "Science", "Geography"};
    School school222 = School{school_id, school_is_public, school_max_capacity, school_name, school_address, school_city, available_subjects};
    school222.HireTeacher(teacher_a);
    school222.HireTeacher(teacher_b);
    school222.HireTeacher(teacher_c);
    school222.HireTeacher(teacher_d);
    school222.EnrollStudent(student_a);
    school222.EnrollStudent(student_b);
    school222.EnrollStudent(student_c);
    school222.EnrollStudent(student_d);
    school222.PrintStudentsCount();
    school222.AddSubject("Art");
    school222.AddSubject("Gym");
    school222.PrintAllSubjects();

    return 0;
}