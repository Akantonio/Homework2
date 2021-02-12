//
// Created by Adrian Antonio on 2/12/2021.
//

#include "programheader.h"

void to_lower(char* s){
    while(*s != '\0'){
        if(*s>= 'A' && *s<= 'Z'){
                *s += 32;
        }
        s++;
    }
}