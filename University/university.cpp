#include "university.h"

university::university(const size_t &expectedSize) {
    capacityStudents = expectedSize;
    countStudents = 0;
    students = new student[capacityStudents];
}

void university::addStudent(const std::string &name, const int &year) {
    student new_student(name, year);
    if(countStudents + 1 == capacityStudents){
        resize();
    }
    students[countStudents] = new_student;
    ++countStudents;
}

size_t university::getCount() const {
    return countStudents;
}

size_t university::getCapacity() const {
    return capacityStudents;
}

void university::resize() {
    this->capacityStudents *= 2;
    student * new_students = new student[capacityStudents];
    for(size_t i = 0; i < countStudents; ++i){
        new_students[i] = students[i];
    }
    delete [] students;
    students = new_students;
}

void university::printStudents() const {
    for(size_t i = 0; i < countStudents; ++i){
        std::cout << i << ": " << students[i].getName() << ' ' << students[i].getYear() << '\n';
    }
}

university::~university() {
    delete[] students;
}


