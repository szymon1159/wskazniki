#include <iostream>
#include <string>
using namespace std;



int main()
{
    string napis="KKKKKK asdasd Rownanie:3-2=4";
    if(napis.find("Hej")!=string::npos )
    {
        cout<<"Dzien dobry";
        cout<<endl;
    }
    if(napis.find("Pa")!=string::npos)
    {
        cout<<"Do widzenia";
    }
    // KKKKKK asdasd Rownanie:1+2=4
    string porownanie="Rownanie:";
    int indeks=napis.find(porownanie);
    if (indeks != string::npos)
    {
        string row=napis.substr(indeks+porownanie.size(),5);
        //1+2=7
        cout<<row[0]<<row[1]<<row[2]<<row[3]<<row[4]<<endl;
        if(row[1]=='+')
        {
            int poprawnyWynik=row[0]-48+row[2]-48;
            if (poprawnyWynik==row[4]-48)
            {
                cout<<"Gratulacje!";
            }
            else
            {
                row[4] = poprawnyWynik + 48;
                cout<<"Poprawny wynik to: "<<row;
            }

        }
        if(row[1]=='-')
        {
            int poprawnyWynik=row[0]-48-(row[2]-48);
            if (poprawnyWynik==row[4]-48)
            {
                cout<<"Gratulacje!";
            }
            else
            {
                row[4] = poprawnyWynik + 48;
                cout<<"Poprawny wynik to: "<<row;
            }

        }

    }
    return 0;
}
