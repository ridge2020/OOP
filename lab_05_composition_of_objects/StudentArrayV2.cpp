#include"StudentArrayV2.h"

StudentArrayV2::StudentArrayV2(int number_of_students){
    members = new Student[number_of_students];
    this->number_of_students = number_of_students;
}

void StudentArrayV2::write( ){
    for(int i = 0; i < number_of_students; ++i){
        members[i].write();
    }
}

StudentArrayV2::~StudentArrayV2(){
    delete [] members;
} 