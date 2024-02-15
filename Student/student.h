#pragma once
#include <iostream>

class student {
private:
    std::string name;
    int year;
public:
    student(const std::string& name, const int& year);

    student(){};

    std::string getName() const;

    int getYear() const;

};

