//
// Created by user_1 on 15.03.2019.
//

#pragma once
#include <string>


class Animal
{
public:
    virtual std::string whatItSays()=0;
    virtual std::string whatItEats()=0;
};

