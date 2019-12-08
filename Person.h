//
// Created by bighead on 2019/12/8.
//

#ifndef FINAL_PERSON_H
#define FINAL_PERSON_H

template <class T_id, class T_name, class T_age, class T_address>
class Person {
private:
    T_id id;
    T_name name;
    T_age age;
    T_address address;

public:
    Person():id(), name(), age(), address(){};
    Person(T_id id, T_name name, T_age age, T_address address): id(id), name(name), age(age), address(address){};
};


#endif //FINAL_PERSON_H
