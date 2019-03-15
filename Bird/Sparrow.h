//
// Created by user_1 on 15.03.2019.
//

#pragma once
#include "../Animal.h"

class Sparrow: public Animal
{
    std::string whatItEats() override;
    std::string whatItSays() override;
};



