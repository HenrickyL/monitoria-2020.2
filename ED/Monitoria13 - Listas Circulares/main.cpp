#include<iostream>
#include "List.h"
using namespace std;

int main(){
    List *l = new List;
    l->add_back(4);
    l->add_back(3);
    l->add_back(7);
    l->add_back(8);
    l->add_back(9);
    l->add_front(0);
    l->add_front(-1);
    l->add_back(10);
    l->add_back(11);
    cout<< "Size: " << l->size() <<"\n";
    l->print();

    int x; 
    cout<< "x: ";
    cin>>x;
    cout << "contem "<<x << "? " << l->contains(x)<<"\n";

    l->remove_back();
    l->remove_back();
    l->remove_back();
    l->print();






    delete l;
    
    return 0;
}