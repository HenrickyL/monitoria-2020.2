#include<iostream>
#include "List.h"
#include<climits>

struct node{
    int value;
    node* next;
    node* back;
};


List::List(){
    _head = new node;
    _head->next = _head;
    _head->back = _head;
    _head->value = -999;
}
List::~List(){
    if(!this->empty()){
        node* aux = _head->back;
        node* t = aux->back;;
        while(aux != _head){
            delete aux;
            aux = t;
            t = aux->back;
        }
    }
    delete _head;
    std::cout<<"Lista deletada\n";

}
bool List::empty(){
    return _head->next == _head;
}


void List::clear(){
    if(!empty()){
        node* aux = _head->back;
        node* t = aux->back;;
        while(aux != _head){
            delete aux;
            aux = t;
            t = aux->back;
        }
        _head->next = _head;
        _head->back = _head;
    }
}

void List::push_back(int key){
    //criar o no
    node* novo = new node;
    novo->value=key;

    node* aux = _head->back; //ultimo antigo
    
    //ajusters de ponteiro
    aux->next = novo;
    _head->back = novo;

    novo->next = _head;
    novo->back = aux;

    std::cout<<"add "<<key << "\n";

}      
int List::pop_back() {
    if(!this->empty()){
        node* ult = _head->back;
        node* pen = ult->back;//penultimo
        int res = ult->value;
        delete ult;

        pen->next = _head;
        _head->back = pen;
        std::cout<<"removed "<<res << "\n";

        return res;
    }
    return INT_MIN;
}             

void List::print(){
    std::cout<<"[ ";
    if(!empty()){
        node* aux =  _head->next;
        while(aux != _head){
            std::cout<<aux->value<<", ";
            aux= aux->next;
        }
    }
    std::cout<<"]\n";
}