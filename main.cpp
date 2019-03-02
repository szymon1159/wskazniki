#include <iostream>
using namespace std;

int** stworzTabliczkaMnozenia(const int iloscWierszy, const int iloscKolumn)
{
    int ** tablica=new int*[iloscWierszy];
    // [ int*]
    // [ int*]
    // [ int*]
    // [ int*]
    for(int i=0;i<iloscWierszy;++i)
    {
        tablica[i]=new int[iloscKolumn];
    }
    // [ int*]->0[int][int]...[int][int]
    // [ int*]->1[int][int]...[int][int]
    // [ int*]->n-2[int][int]...[int][int]
    // [ int*]->n-1[int][int]...[int][int]
    for (int i=0;i<iloscWierszy;i++)
    {
        for(int j=0;j<iloscKolumn;j++)
        {
            tablica[i][j]={(i+1)*(j+1)};
        }
    }
    return tablica;
}
void wyswietlanie(int** tabliczka, int rozmiar)
{
    for(int i=0;i<rozmiar;i++){
        for(int j=0;j<rozmiar;j++){
            cout<<tabliczka[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int** wsk=stworzTabliczkaMnozenia(15,15);
    wyswietlanie(wsk,15);
    for(int i=0;i<15;++i) {
        delete[] wsk[i];
    }
    delete[] wsk;
    wsk=nullptr;

    return 0;
}