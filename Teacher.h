//
// Created by bighead on 2019/12/8.
//

#ifndef FINAL_TEACHER_H
#define FINAL_TEACHER_H

#include "Person.h"

template <class T_education, class T_college, class T_position>
class Teacher: public Person<class T_id, class T_name, class T_age, class T_address>{
private:
    T_education education;
    T_college college;
    T_position position;

public:
    Teacher()= default;
};

#endif //FINAL_TEACHER_H
