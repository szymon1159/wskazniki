//
// Created by user_1 on 26.03.2019.
//
#include <iostream>
#include "Sortowanie.h"
using namespace std;

void Sortowanie::insertSort(std::vector<int> &nowyWektor)
{
    int obecna;
    int zmienna;
    for (unsigned int i = 1; i < nowyWektor.size(); i++) {
        obecna = nowyWektor[i];
        zmienna = i;
        while (zmienna > 0 && obecna < nowyWektor[zmienna - 1]) {
            nowyWektor[zmienna] = nowyWektor[zmienna - 1];
            zmienna--;
        } /// WCIECIA
        nowyWektor[zmienna] = obecna; /// WCIECIA
    }
    for (unsigned int i = 0; i < nowyWektor.size(); i++) { /// OSOBNA METODA DO WYSWIETLANIA
        cout << nowyWektor[i] << " ";
    }
}
void Sortowanie::bubbleSort(std::vector<int>& nowyWektor)
{
    int obecna;
    int nastepna;
    for (unsigned int i=0;i < nowyWektor.size();){
       obecna=nowyWektor[i];
       nastepna=nowyWektor[i+1];
       for (int j=i;j<nowyWektor.size();j++)
       {

       }
       i++;
    }
}