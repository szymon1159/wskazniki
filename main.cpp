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
    Product()
    {}
};
class Refrigator
{
    int liczbaProduktow=0;
    Product products[10];
public:
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
    void zjedz(string napis)
    {
        products=
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
    lodowka.dodaj(k);
    lodowka.dodaj(j);
    lodowka.dodaj(s);
    lodowka.dodaj(p);
    lodowka.wyswietl();
    cout<<endl;
    lodowka.obnizTemperature();
    lodowka.wyswietl();
}

