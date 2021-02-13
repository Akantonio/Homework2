//
// Created by Adrian Antonio on 2/12/2021.
//
#include "memoryLay.h"

void printPointer(int &i){
    int* iptr= &i;
    //the unary * operator dereferences the pointer
    std::cout<< "i = "<< i <<"\n";
    std::cout<< "&i = " << iptr <<"\n";
}

void memoryLayout(){
     int num1=1;
     int num2=2;
     int num3=3;
     printPointer(num1);
     printPointer(num2);
     printPointer(num3);


}