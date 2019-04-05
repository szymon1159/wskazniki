#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

struct Node
        {

};
            int value;
            Node *next{nullptr};
            ~Node() {
                if (next)
                {
                    delete next;
        }


        cout << "Koniec destruktora o wartosci: " << value << endl;


    }





void insert(Node *head, int new_value, int position) {


    Node *beforeNew{head};


    for (int i = 0; i < position && beforeNew; ++i) {


        beforeNew = beforeNew->next;


    }


    if (not beforeNew)


        return;


    Node *newElement = new Node;


    newElement->value = new_value;


    newElement->next = beforeNew->next;


    beforeNew->next = newElement;


}


void print_nodes(Node *head) {


    Node *nodeToPrint{head};


    while (nodeToPrint) {


        cout << "Node z wartoscia: " << nodeToPrint->value << endl;


        nodeToPrint = nodeToPrint->next;


    }


    cout << "KONIEC LISTY" << endl;


}




}