//
// Created by Adrian Antonio on 2/11/2021.
//

#include "catch.hpp"
#include "programheader.h"
#include "memoryLay.h"



TEST_CASE("Struct Value"){

    std::list<buildingValue> buildingList(5); //Initializing a list of buildingValues.
    for(int i=0; i<5;++i ){
        buildingList.push_back(buildingValue{i,200,"ForLoop"});
        buildingList.pop_front();
    }
    SECTION("Queue:First-in First-out"){
        buildingList.push_back(buildingValue{11,234,"Fox"});
        buildingList.pop_front();
        toPrintList(buildingList);
        auto it = buildingList.back();

        std::string check;
        check = it.name;

        REQUIRE("Fox" == check);
    }
    SECTION("Stack:Last-in First Out"){
        buildingList.push_back(buildingValue{17,1300,"Truffle"});
        buildingList.pop_back();
        toPrintList(buildingList);
        auto it= buildingList.back();

        int checkInt= it.identification;
        std::string check;
        check = it.name;
        REQUIRE(checkInt== 4);
        REQUIRE("ForLoop"==check);
    }
    SECTION("Insert and Find"){
        REQUIRE(toSearch(buildingList,"Fox"));
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

TEST_CASE("Memory Allocation"){
    memoryLayout();
}