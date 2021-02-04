#include <iostream>
#include "List.h"
using namespace std;

int main(){
    List l;
    cout<<"Vazia? "<<l.empty()<<"\n";
    l.add(1);
    l.add(4);
    l.add(6);
    l.add(4);
    l.add(7);
    l.add(10);
    l.add(15);
    l.add(20);
    l.print();

    cout<<"Vazia? "<<l.empty()<<"\n";
    l.remove(4);
    l.print();
    l.reverse();
    l.print();
    cout<<"digite o indice:";
    int i;
    cin>>i;
    cout<<"Valor: "<<l.at(i)<<"\n";
    int v[] = {-1,-2,-3,-4,-5};
    l.copyArray(v,5);
    l.print();
    List *x = new List;
    x->add(1);
    x->add(2);
    x->add(3);

    List *y = new List;
    y->add(1);
    y->add(2);
    y->add(3);
    y->add(4);

    x->print();
    y->print();
    cout<<"Iguais? "<<x->equal(y)<<"\n";
    delete x;
    delete y;

    return 0;
}