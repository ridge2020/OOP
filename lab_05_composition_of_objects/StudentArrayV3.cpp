#include"StudentArrayV3.h"

StudentArrayV3::StudentArrayV3(){
    for(int i=0; i < max_array_size; ++i){
        members[i] = nullptr;
    }
}

void StudentArrayV3::add(){
    Student* newObject = new Student;
    members[number_of_students] = newObject;
    number_of_students += 1;
}

void StudentArrayV3::write(){
    for(int i=0; i < number_of_students; ++i){
        members[i]->write();
    }
}

StudentArrayV3::~StudentArrayV3(){
    for(int i=0; i < number_of_students; ++i){
        delete members[i];
    }
}