#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Ulamek
{
    int mianownik;
    int licznik;

};
Ulamek sumowanie(Ulamek *pierwszy,Ulamek *drugi)
{
    Ulamek ulamek3;
    ulamek3.mianownik=pierwszy->mianownik*drugi->mianownik;
    ulamek3.licznik=pierwszy->licznik*drugi->mianownik+drugi->licznik*pierwszy->mianownik;
    return ulamek3;
}

int main()
{
    Ulamek ulamek1;
    Ulamek ulamek2;
    cout<<"Podaj pierwszy licznik: ";
    cin>>ulamek1.licznik;
    cout<<"Podaj pierwszy mianownik: ";
    cin>>ulamek1.mianownik;
    cout<<"Podaj drugi licznik: ";
    cin>>ulamek2.licznik;
    cout<<"Podaj drugi mianownik: ";
    cin>>ulamek2.mianownik;
    Ulamek suma=sumowanie(&ulamek1,&ulamek2);
    cout<<suma.licznik<<endl;
    cout<<suma.mianownik;
    return 0;
}
