#include <iostream>
#include <string>
#include <cmath>

using namespace std;


struct Punkt
{
    int x;
    int y;
    int z;
    float odleglosc(Punkt);
};
float Punkt::odleglosc(Punkt inny)
{
    return sqrt(pow(x-inny.x,2)+pow(y-inny.y,2)+pow(z-inny.z,2));
}

int main()
{
    Punkt a{1,2,3};
    Punkt b{2,4,6};
    cout<<a.odleglosc(b);

    return 0;
}
