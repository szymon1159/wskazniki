//
// Created by user_1 on 26.03.2019.
//

#pragma once
#include <string>

class Product {
    std::string name;
    int temperature;
public: /// TUTAJ WCIECIE DO POPRAWY
    Product(std::string nazwa,int temp);
    void obnizTemperature();
    int getTemperature();
    std::string getName();
};


