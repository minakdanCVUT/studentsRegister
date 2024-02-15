#include "student.h"

student::student(const std::string &name, const int &year) {
    this->name.append(name);
    this->year = year;
}

std::string student::getName() const{
    return name;
}

int student::getYear() const {
    return year;
}


