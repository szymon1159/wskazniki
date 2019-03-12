#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class Refrigator;
class Product
{
    friend Refrigator;
    string name;
    int temperatura;
public:
    Product(string nazwa,int temp)
    :name{nazwa}
    ,temperatura{temp}
    {

    }
};
class Refrigator
{
public:
    int liczbaProduktow=0;
    Product products[10];
    void obnizTemperature()
    {
        for(int i=0;i<liczbaProduktow;i++)
        {
            products[i].temperatura--;
        }
    }
    void dodaj(Product p)
    {
        if (liczbaProduktow<10)
        {
            products[liczbaProduktow] = p;
            liczbaProduktow++;
        }
    }
    void wyswietl()
    {
        for(int i=0;i<liczbaProduktow;i++)
        {
            cout << "W lodowce jest " << products[i].name << " o temperaturze " << products[i].temperatura<<endl;
        }
    }

};

int main()
{
    Refrigator lodowka;
    Product m("mleko",10);
    Product k("kakao",15);
    Product j("jajka",10);
    Product s("szynka",15);
    Product p("piwo",15);
    lodowka.dodaj(m);
    lodowka.wyswietl();
}

