#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
using namespace std;
int main()
{
    char tablica[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            tablica[i][j]=' ';
        }
    }
    int wiersz;
    int kolumna;
    for(int i=0;i<9;i++)
    {
        cout << "Graczu pierwszy, podaj wiersz, w ktorym chcesz umiecic znak: " << endl;
        cin >> wiersz;
        cout << "Podaj kolumne, w ktorej chcesz umiescic znak: " << endl;
        cin >> kolumna;
        tablica[wiersz - 1][kolumna - 1] = 'x';
        for (int j = 0; j < 3; j++)
        {
            cout<<endl;
            for (int k = 0; k < 3; k++)
            {
                cout << tablica[j][k];
            }
        }

        cout << "Graczu drugi, podaj wiersz, w ktorym chcesz umiecic znak: " << endl;
        cin >> wiersz;
        cout << "Podaj kolumne, w ktorej chcesz umiescic znak: ";
        cin >> kolumna;
        tablica[wiersz - 1][kolumna - 1] = 'o';
        for (int j = 0; j < 3; j++)
        {
            cout<<endl;
            for (int k = 0; k < 3; k++)
            {
                cout << tablica[j][k];
            }
        }
        i++;
    }


}





//
// Created by user_1 on 29.03.2019.
//

