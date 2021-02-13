//
// Created by Adrian Antonio on 2/11/2021.
//

#include "catch.hpp"
#include "programheader.h"

std::list<buildingValue> buildingList(5);

TEST_CASE("Struct Value"){
    toPrintList(buildingList);
    for(int i=0; i<5;++i ){
        buildingList.push_back(buildingValue{i,200,"ForLoop"});
        buildingList.pop_front();
    }
    SECTION("Queue:First-in First-out"){
        buildingList.push_back(buildingValue{11,2000,"Fox"});
        buildingList.pop_front();
        std::string check;
        REQUIRE("Fox" == check);
    }
    SECTION("Stack:Last-in First Out"){
        buildingList.push_back(buildingValue{17,1300,"Truffle"});
        toPrintList(buildingList);
        buildingList.pop_back();
    }
    SECTION("Insert and Find"){
        std::list<buildingValue>::iterator it = buildingList.begin();
    }
    SECTION("Print the list out"){
        toPrintList(buildingList);
    }
}
TEST_CASE("Lower Case letters"){

    char sentence[]= "THIS IS ALL CAPITAL";
    char correct[]="this is all capital";
    to_lower(sentence);
    REQUIRE(*sentence==*correct);

    char helloSentence[]= "Hello, World!";
    char cHelloS[] ="hello, world!";
    to_lower(helloSentence);
    REQUIRE(*helloSentence==*cHelloS);
}