#include"StudentArrayV1.h"

void StudentArrayV1::write( ){
    for(int i = 0; i < 5; ++i){
        members[i].write();
    }
}

