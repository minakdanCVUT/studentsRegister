#pragma once
#include <iostream>
#include "../Student/student.h"

class university {
private:
    student * students;
    size_t countStudents;
    size_t capacityStudents;
public:
    university(const size_t& expectedSize);

    ~university();

    void addStudent(const std::string& name, const int &year);

    size_t getCount() const;

    size_t getCapacity() const;

    void resize();

    void printStudents() const;

};

