#include"StudentArrayV4.h"
#include"Student.h"
#include<fstream>
#include<string>
#include<iomanip>
    using std::setw;
#include<iostream>
    using std::cout;

StudentArrayV4::StudentArrayV4(){
   this->physicalArraySize = 3;
   this->_array = new Student[physicalArraySize];
}

void StudentArrayV4::add(const Student& new_student){
    if(number_of_students == physicalArraySize){
        physicalArraySize = physicalArraySize + 3;
    }
    Student* newObject = new Student[physicalArraySize];
    for(int i = 0; i < number_of_students; ++i){
            newObject[i] = _array[i];
    }
    delete _array;
    _array = newObject;
    ++number_of_students;
    _array[number_of_students+1] = new_student;
}

void StudentArrayV4::add_from(std::istream& infile){
    Student newStudent;
    std::string name;
    int idNum;
    double test1, test2, test3;
    getline(infile, name,':');
    //cout << name;
    newStudent.set_name(name);
    infile >> idNum;
    //cout << idNum;
    newStudent.set_id(idNum);
    infile >> test1;
    //cout << test1;
    newStudent.set_exam_score(1, test1);
    infile >> test2;
    newStudent.set_exam_score(2, test2);
    infile >> test3;
    newStudent.set_exam_score(3, test3);
    _array[number_of_students + 1] = newStudent;
}

std::ostream&  StudentArrayV4::write(std::ostream& outfile) const{
    outfile << setw(15) << " name" << setw(5)
         << "id#" << setw(7) << "grade" 
         << setw(7) << "avg" << setw(4)
         << "1" << setw(4) << "2" 
         << setw(4) << "3" << std::endl;
    for(int i = 0; i < number_of_students; i++){
        outfile << setw(15) << _array[i].get_name() << setw(5)
                << _array[i].get_id() << setw(7) << _array[i].get_letter_grade() 
                << setw(7) << _array[i].get_average() << setw(4)
                << _array[i].get_exam_score(1) << setw(4) << _array[i].get_exam_score(2) 
                << setw(4) << _array[i].get_exam_score(3) << std::endl;
    }
    return outfile;
}


StudentArrayV4::~StudentArrayV4( ){
    delete _array;
    _array = nullptr;
}

int StudentArrayV4::read( std::istream& infile ){
    int students;
    while(!infile.eof()){
    add_from(infile);
    ++students;
    }
    return students;
}