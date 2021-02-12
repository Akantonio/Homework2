//
// Created by Adrian Antonio on 2/11/2021.
//

#include "catch.hpp"
#include "programheader.h"

std::list<buildingValue> buildingList(10);

TEST_CASE("Struct Value"){
    SECTION("Queue:First-in First-out"){

    }
    SECTION("Stack:Last-in First Out"){

    }
    SECTION("Insert and Find"){

    }
    SECTION("Print the list out"){
    toPrintList(buildingList);
    }
}
TEST_CASE("Lower Case letters"){

    char sentence[]= "THIS IS ALL CAPITAL";
    char correct[]="this is all capital";
    to_lower(sentence);
    REQUIRE(sentence==correct);

    char helloSentence[]= "Hello, World!";
    to_lower(helloSentence);
    REQUIRE(helloSentence=="hello, world!");
}