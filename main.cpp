#include <iostream>
#include <string>
#include <cmath>
#include "Mammal\dog.h"
#include "Bird\Sparrow.h"

using namespace std;

void printInfo(Animal* wsk)
{
    cout<<wsk->whatItEats()<<endl;
    cout<<wsk->whatItSays()<<endl;
}

int main()
{
    Animal* pies= new Dog;
    Animal* sep=new Sparrow;
    printInfo(pies);
    printInfo(sep);
    delete pies;
    delete sep;
}