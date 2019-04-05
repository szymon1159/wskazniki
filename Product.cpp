//
// Created by user_1 on 26.03.2019.
//

#include "Product.h"
using namespace std;

Product::Product(string nazwa,int temp)
:name{nazwa}
,temperature{temp}
{
}
void Product::obnizTemperature()
{
    --temperature;
}
int Product::getTemperature()
{
    return temperature;
}
string Product::getName()
{
    return name;
}