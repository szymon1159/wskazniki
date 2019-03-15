#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Matka
{
public:
    Matka()
    {
       // cout<<"Cokolwiek"<<endl;
    }
   void zrobienie()
    {
        cout<<"Jakis cout"<<endl;
    }

    virtual ~Matka()
    {
        //cout<<"Zniszczenie po raz pierwszy"<<endl;
    }
};
class Corka : public Matka
{
public:
    Corka()
    {
        //cout<<"Jakis tekst"<<endl;
    }
    ~Corka()
    {
       // cout<<"Zniszczenie po raz ostatni"<<endl;
    }
    void zrobienie()
    {
        cout<<"Nadpisanie"<<endl;
    }
};

int main()
{

    Matka* mama = new Matka;
    Matka* druga = new Corka();
    mama->zrobienie();
    druga->zrobienie();
    delete mama;
    delete druga;
}

