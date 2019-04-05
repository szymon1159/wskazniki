//
// Created by user_1 on 26.03.2019.
//

#pragma once
#include <vector>
#include "Product.h"

class Refrigator{
    std::vector <Product> products;
    public:
        void obnizTemperature();

        void wyswietl();

        void dodaj(Product nazwa);
};


