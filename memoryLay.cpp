//
// Created by Adrian Antonio on 2/12/2021.
//
#include "memoryLay.h"

void printPointer(int i){
    int* iptr= &i;
    //the unary * operator dereferences the pointer
    std::cout<< "i = "<< iptr<<"\n";
    std::cout<< "&i = " <<iptr <<"\n";
}

void memoryLayout(){
     int num1=0;
     int num2=0;
     int num3=0;\
     printPointer(num1);
     printPointer(num2);
     printPointer(num3);


}