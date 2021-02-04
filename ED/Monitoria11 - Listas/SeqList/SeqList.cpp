#include "SeqList.h"


SeqList::SeqList(int n){
    _capacity = n;
    _size=0;
    //alocar o vetor
    _v = new int[_capacity];
}


SeqList::~SeqList(){
    std::cout<<"<Lista deletada!>\n";
    delete[] _v;
}

    

int SeqList::size(){
    return _size;
}

bool SeqList::isFull(){
    return _size==_capacity;
}

int SeqList::at(int k){
    if(k>=0 && k < _size)
        return _v[k];
    else{
        std::cout<< "<Posição invalida!>\n";
        return -999;
    }

}

bool SeqList::add(int x){
    if(! isFull()){
        _v[_size] = x;
        _size++;
        std::cout<<"add "<<x<<"\n";
        return true;
    }else{
        std::cout<<"<Lista cheia>\n";
        return false;
    } 
}

int SeqList::search(int x){
    for(int i=0;i<_size;i++){
        if(_v[i]==x) return i;
    }
    return -1;
}


bool SeqList::remove(int x){
    //tenho que buscar o elemento
    int k = this->search(x);//posição do elemento que quero remover
    if(k==-1) return false;//não posso remover pq não está
    else{
        //"troco" com o ultimo
        _v[k]=_v[_size-1];
        _size--;
        std::cout<<"removed "<<x<<"\n";
        return true;
    }

}

void SeqList::clear(){
    _size=0;
}


void SeqList::print(){
    std::cout<<"[";
    for(int i=0;i<_size;i++){
        std::cout<< _v[i]<<",";
    }
    std::cout<<"]\n";
}
std::string  SeqList::toString(){
    this->print();
    return "*";
    //std::string s = "[";
    //for(int i=0;i<_size;i++){
     //   s+=_v[i]+", ";
    //}
    //s+="]\n";
    //return s;

}

bool SeqList::replaceAt(int x, int k){
    if(k>=0 && k<_size){
        _v[k] =x;
        return true;
    }
        return false;

}


void SeqList::removeAll(int x){
    for(int i=0;i<_size;i++){
        if(_v[i]==x){
            _v[i]=_v[_size-1];
            _size--;
            i--;
        }
    }
}

bool SeqList::removeAt(int k){
    return true;
}  

    // Member function: bool insertAt(int x, int k);
    // Adiciona o elemento x na posicao com indice k da lista,
    // somente se 0 <= k <= size() e size() < capacity_vec.
    // Antes de fazer a insercao, todos os elementos da
    // posicao k em diante sao deslocados uma posicao para a direita.
    // A funcao retorna true se a insercao for feita com sucesso;
    // ou retorna false caso contrario.
    bool SeqList::insertAt(int x, int k){
        return true;
    }