#include<iostream>
#include "List.h"

using namespace std;
int main(){
    List *l = new List;
    cout<<"Está vazia? " << l->empty()<<"\n";
    l->print();
    l->push_back(4);
    l->push_back(2);
    l->push_back(5);
    l->push_back(6);
    l->push_back(3);
    l->push_back(9);
    l->print();
    l->push_back(-1);
    l->pop_back();
    l->pop_back();
    l->pop_back();
    l->print();




    l->clear();
    l->print();






    cout<<"Está vazia? " << l->empty()<<"\n";




    delete l; 
    return 0;
}