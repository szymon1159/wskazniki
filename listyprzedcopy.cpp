#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <map>
using namespace std;

struct Album
{
    string nazwaAlbumu;
    string artysta;
    int rokWydania;
    bool operator<(const Album &other) const {
        if (rokWydania < other.rokWydania) {
            return true;
        }
        if (rokWydania > other.rokWydania) {
            return false;
        }
        if (nazwaAlbumu < other.nazwaAlbumu) {
            return true;
        }
        if (nazwaAlbumu > other.nazwaAlbumu) {
            return false;
        }
        return artysta < other.artysta;
    }
};

int main() {
    set<Album> albumy;
    Album pierwszy;
    pierwszy.artysta = "Linkin Park";
    pierwszy.nazwaAlbumu = "Meteora";
    pierwszy.rokWydania = 2003;
    albumy.insert(pierwszy);
    Album drugi;
    drugi.artysta = "Linkin Park";
    drugi.nazwaAlbumu = "Hybrid Theory";
    drugi.rokWydania = 2003;
    albumy.insert(drugi);
    Album trzeci;
    trzeci.artysta = "Pink Floyd";
    trzeci.nazwaAlbumu = "The Piper at the Gates of Dawn";
    trzeci.rokWydania = 1967;
    albumy.insert(trzeci);
    Album czwarty;
    czwarty.artysta = "Metallica";
    czwarty.nazwaAlbumu = "Metallica";
    czwarty.rokWydania = 1967;
    albumy.insert(czwarty);
    for (const Album &element : albumy) {
        cout << element.artysta << endl;
        cout << element.rokWydania << endl;
        cout << element.nazwaAlbumu << endl;
    }

}



//
// Created by user_1 on 29.03.2019.
//

