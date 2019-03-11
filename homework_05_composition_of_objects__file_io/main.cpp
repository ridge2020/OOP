#include"StudentArrayV4.h"
#include<fstream>


int main(){
    std::ifstream infile;
    infile.open("oop04in.txt");
    std::ofstream outfile;
    outfile.open("oop04out.txt");
    
    StudentArrayV4 newObject;
    newObject.read(infile);
    
    return 0;
}