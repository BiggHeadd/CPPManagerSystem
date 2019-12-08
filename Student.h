//
// Created by bighead on 2019/12/8.
//

#ifndef FINAL_STUDENT_H
#define FINAL_STUDENT_H


#include "Person.h"

template <class T_major, class T_college, class T_grade>
class Student: public Person<class T_id, class T_name, class T_age, class T_address>{
private:
    T_major major;
    T_college college;
    T_grade grade;

public:
    Student()= default;
};


#endif //FINAL_STUDENT_H
