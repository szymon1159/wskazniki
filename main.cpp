#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Animal
{
public:
    virtual void wayItMoves()=0;
    virtual void whatItSays()=0;
};
class Mammal: public Animal
{
public:
    virtual void whatItEats()=0;
};
class Bird: public Animal
{
public:
    virtual void featherColor()=0;
};
class Pig: public Mammal
{
public:
    void whatItSays() override
    {
        cout<<"PIIII PIII"<<endl;
    }
    void whatItEats() override
    {
        cout<<"Everything"<<endl;
    }
    void wayItMoves() override
    {
        cout<<"By walk"<<endl;
    }
};
class Dog: public Mammal
{
public:
    void whatItSays() override
    {
        cout<<"Hoew Hoew"<<endl;
    }
    string whatItEats() override
    {
        cout<<"Bones"<<endl;
    }
    void wayItMoves() override
    {
        cout<<"By walk"<<endl;
    }
};
class Sparrow: public Bird
{
    void whatItSays() override
    {
        cout<<"Cwir cwir"<<endl;
    }
    void featherColor() override
    {
        cout<<"Brown"<<endl;
    }
    void wayItMoves() override
    {
        cout<<"Chodzi i lata"<<endl;
    }
};
class Vulture: public Bird {
    void whatItSays() override
    {
        cout << "Uuuu uuuu" << endl;
    }

    void featherColor() override
    {
        cout << "Black and white" << endl;
    }

    void wayItMoves() override
    {
        cout << "Chodzi i lata"<<endl;
    }
};
void zmiana(Mammal &Mammal)
{
    
}
int main()
{
    Bird* sep= new Vulture;
    Bird* wrobel=new Sparrow;
    Mammal* swinia= new Pig;
    Mammal* pies=new Dog;
    sep->wayItMoves();
    sep->whatItSays();
    sep->featherColor();
    wrobel->wayItMoves();
    wrobel->whatItSays();
    wrobel->featherColor();
    swinia->wayItMoves();
    swinia->whatItSays();
    swinia->whatItEats();
    pies->whatItSays();
    pies->wayItMoves();
    pies->whatItEats();
    delete sep;
    delete wrobel;
    delete swinia;
    delete pies;
}

