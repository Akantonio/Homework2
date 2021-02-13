//
// Created by Adrian Antonio on 2/12/2021.
//

#include "programheader.h"


void toPrintList(std::list<buildingValue> & storedBuild){
    std::list <buildingValue> :: iterator it;
    for(it = storedBuild.begin(); it != storedBuild.end(); ++it) {
        std::cout << it->identification << " "<< it->value<< " "<< it->name <<" "<<  it->length <<" "<< it->width <<" "<< it->height << '\t' ;
    }
    std::cout << '\n';

}

void to_lower(char* s){
    while(*s != '\0'){
        if(*s>= 'A' && *s<= 'Z'){
                *s += 32;
        }
        s++;
    }
}
