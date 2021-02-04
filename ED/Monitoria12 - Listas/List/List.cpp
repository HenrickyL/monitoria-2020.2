#include<iostream>
#include "List.h"
#include<climits>

List::List(){
    _head = new node;
    _head->value = -999;
    std::cout<<"<Lista Criada!>\n"; 

}

List::~List(){
    node* aux = _head->next;
    node*t = aux;
    while(aux != nullptr){
        aux = aux->next;
        delete t;
        t = aux; 
    }
    delete _head; 
    std::cout<<"<Lista destruida!>\n"; 
}


bool List::empty(){
    return _head->next == nullptr;
}

void List::add(int x){
    node* novo = new node;
    novo->value = x;
    if(this->empty()){
        _head->next = novo;
    }else{
        node* aux = _head;
        while(aux->next != nullptr){
            aux= aux->next;
        }
        //neste ponto o aux está apontando para o ultimo nó
        aux->next = novo;
    }
    std::cout<<"<Add "<<x<<">\n"; 

}

void List::remove(int x){
    if(!this->empty()){
        node* aux = _head;
        while(aux->next != nullptr){
            //verifico se o posterior do aux tem o valor que eu quero
            if( (aux->next)->value  == x){
                node* t = aux->next->next;
                delete aux->next;
                aux->next = t;
                std::cout<<"<Removed "<<x<<">\n";
                break;
            }
            aux = aux->next;
        }
    }
}

void List::print(){
    std::cout<< "[";
    if(!this->empty()){
        node* aux = _head->next;
        while(aux!=nullptr ){
            std::cout<<aux->value << ", ";
            aux=aux->next;
        }
    }
    std::cout<< "]\n"; 
}


void List::clear(){
    node* aux = _head->next;
    node*t = aux;
    while(aux != nullptr){
        aux = aux->next;
        delete t;
        t = aux; 
    }
    _head->next=nullptr;
}

int List::size(){
    if(!empty()){
        int size=0;
        node* aux = _head->next;
        while(aux != nullptr){
            size++;
            aux=aux->next;
        }
        return size;
    }else{
        return 0;
    }
}

node* List::auxReverse(node* no,node* ant){
    //caso base
    if(no ==nullptr){
        _head->next = ant; // assim o head aponta para o ultimo
        return ant;//ultimo volta para e le ser apontado para o anterior antigo dele
    //chamada da recursão
    }else{
        no = auxReverse(no->next, no);
        no->next = ant;
        return ant;
    }
}

void List::reverse(){
    if(!empty()){
       auxReverse(_head->next, nullptr);
    }     
}

int List::at(int i){
    if(!empty()){
        if(0<=i && i<size()){
            int count=0;
            node* aux = _head->next;
            while(aux!=nullptr){
                //verificaçaõ
                if(count == i){
                   return aux->value;
                }
                //
                count++;
                aux = aux->next;
            }
        }else{
            std::cout<<"<Indice é invalido!>\n";
            return INT_MIN;
        }
    }
    std::cout<<"<Lista vazia!>\n";
    return INT_MIN;
}


void List::copyArray(int v[], int n){
    if(n>=1){
        this->clear();
        for(int i=0;i<n;i++){
            std::cout<<"*";
            this->add(v[i]); 
        }
        return;
    }
    std::cout<<"<vetor invalido!>\n";

}

bool List::equal(List* lst){
    if(!this->empty() && !lst->empty() ){
        node* aux= _head->next;
        node* t = lst->_head->next;
        //garantir que é igual
        while(aux!=nullptr && t!=nullptr){
            if(t->value != aux->value)
                return false;
            t = t->next;
            aux = aux->next;
        }
        //garante os dois terem o mesmo tamanha
        if(aux ==nullptr && t==nullptr)
            return true;
        else 
            return false;
    }
    return false;
}
