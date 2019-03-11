#include"StudentArrayV4.h"

StudentArrayV4::StudentArrayV4(){
   this->physicalArraySize = 3;
   this->members = new Student**[physicalArraySize];
}

StudentArrayV4::add(){
    newObject = new Student**[physicalArraySize + 1];
    for(int i = 0; i < number_of_students; ++i){
        newobject[i] = members[i];
    }
    ++number_of_students;
    delete members;
    members = newObject;
}

StudentArrayV4::write(){
    
}