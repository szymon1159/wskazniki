//
// Created by user_1 on 26.03.2019.
//

#include "Product.h"
#include "Refrigator.h"
#include <iostream>

using namespace std;

void Refrigator::obnizTemperature() /// WCIECIE
{
    // ALTERNATYWNIE MOGLES UZYC:
    // for (Product& product : products) // REFERENCJA POTRZEBNA ZEBY DZIALAC NA TYM SAMYM OBIEKCIE
    for(int i=0;i<products.size();i++)
    {
        products[i].obnizTemperature(); /// PRE DEKREMENTACJA JEST SZYBSZA
    }
}
void Refrigator::wyswietl()
{
    // ALTERNATYWNIE MOGLES UZYC:
    // for (const Product& product : products) // REFERENCJA ZEBY NIE KOPIOWAC, const JAKO INFORMACJA ZE NIE ZMIENIAMY NIC W OBIEKCIE
    for(int i=0;i<products.size();i++)
    {
        /// OPCJONALNIE MOGLES NAPISAC METODE wyswietl W PRODUKCIE
        cout<< "W lodowce jest " << products[i].getName() << " o temperaturze " << products[i].getTemperature()<<endl;
    }
}
void Refrigator::dodaj(Product nazwa) /// POWINNO BYC dodaj(const Product& product)
/// NAZWA ZMIENNEJ nazwa JEST MYLACA. REFERENCJA POTRZEBNA, ZEBY WIELOKROTNIE NIE KOPIOWAC TEGO SAMEGO OBIEKTU
{
    products.push_back(nazwa);
}