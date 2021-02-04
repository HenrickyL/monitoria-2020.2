#include<iostream>
#include "List.h"
#include<climits>

struct Node{
    int value;
    Node* next=nullptr;
};


List::List(){
    _head = new Node;
    //para ter a circularidade
    _head->next = _head;
    _head->value = -999;
}

List::~List(){
    if(!this->empty()){
        Node *aux = _head->next;
        Node *t = aux;
        while(aux != _head){
            aux = aux->next;
            delete t;
            t=aux;
        }
    }
    delete _head;
    std::cout << "Lista deletada!\n";
}


bool List::empty(){
    return _head->next == _head;
}


int List::size(){
    if(!this->empty()){
        int count = 0;
        Node *aux = _head->next;
        while(aux != _head){
            count++;
            aux = aux->next;
        } 
        return count;
    }
    return 0;
}

void List::clear(){
    if(!this->empty()){
        Node *aux = _head->next;
        Node *t = aux;
        while(aux != _head){
            aux = aux->next;
            delete t;
            t=aux;
        }
        _head->next = _head;
    }
}

bool List::contains(int x){
    if(!this->empty()){
        Node *aux = _head->next;
        while(aux != _head){
            if(aux->value == x){
                return true;
            }
            aux = aux->next;
        }
    }
        return false;
}

void List::add_back(int x){
    Node* novo = new Node;
    novo->value = x;
    novo->next = _head;
    if(this->empty()){
        _head->next = novo;
    }else{
        Node *aux = _head;
        //mover o aux ate o ultimo
        while(aux->next != _head){
            aux = aux->next;
        }
        aux->next = novo;
    }
    std::cout << "add "<< x <<" back\n";
}
void List::add_front(int x){
    Node *aux = _head->next;
    
    Node *novo = new Node;
    novo->value = x;

    _head->next = novo;
    novo->next = aux;
    std::cout << "add "<< x <<" front\n";

}


int List::remove_back(){
    if(!this->empty()){
        Node *aux = _head;
        Node *t = aux;
        //mover o aux ate o ultimo
        while(aux->next != _head){
            t = aux;//t no penultimo
            aux = aux->next; // aux no ultimo
        }
        int res = aux->value;
        delete aux;
        t->next= _head;
        std::cout<<"removed "<< res<<"\n";
        return res;
    }else
        return INT_MIN;
}


void List::print(){
    std::cout<< "[";
    if(!this->empty()){
        Node* aux = _head->next;
        while(aux!=_head ){
            std::cout<<aux->value << ", ";
            aux=aux->next;
        }
    }
    std::cout<< "]\n"; 
}