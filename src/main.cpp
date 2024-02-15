#include <iostream>
#include <list>
#include "../Student/student.h"
#include "../University/university.h"

typedef std::list<std::string> list_t;

int main(){
    university * univer = new university(2);
    list_t names = {"Danil", "Vlad", "Andrey", "Artur", "Sanya"};
    int ageCounter = 18;
    for(list_t::iterator it = names.begin(); it != names.end(); ++it){
        univer->addStudent(*it, ageCounter);
        ageCounter += 3;
    }
    univer->printStudents();
    delete univer;
}
