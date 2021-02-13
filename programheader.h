//
// Created by Adrian Antonio on 2/12/2021.
//

#ifndef HOMEWORK2_PROGRAMHEADER_H
#define HOMEWORK2_PROGRAMHEADER_H

#include<iostream>
#include<string>
#include<list>

struct buildingValue{
    int identification;
    int value;
    std::string name="Default";
    double length;
    double width;
    double height;
};


void to_lower(char * s);
void toPrintList(std::list<buildingValue> & storedBuild);
bool toSearchName(std::list<buildingValue> & storedBuild,std::string & searchParameters);

#endif //HOMEWORK2_PROGRAMHEADER_H
