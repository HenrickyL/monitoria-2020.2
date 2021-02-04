//Lista Simplesmente Encadeada
#ifndef LIST_H
#define LIST_H

struct Node;

class List{
private:
    Node* _head;
    int _size=0;
public:
    List();

    // Destrutor: libera toda memoria que foi alocada
    ~List();                    //O(n)

    // contains: retorna true se a lista contem um no com valor x;
    // retorna false caso contrario
    bool contains(int x);       //O(n)

    // empty: retorna true se a lista estiver vazia;
    // retorna false caso contrario
    bool empty();               //O(1)

    // size: retorna a quantidade de elementos na lista
    int size();                 //O(n)

    // clear: deixa a lista vazia, sem elementos
    void clear();               //O(n)
    // add_back: insere um no com valor x ao final da lista
    void add_back(int x);       //O(n)
    // add_front: insere um no com valor x no inicio da lista
    void add_front(int x);      //O(1) 
    // remove_front: remove o elemento que esta no inicio da lista
    // retorna o valor do no caso ele exista;
    // ou retorna INT_MIN caso não exista primeiro elemento
    int remove_front();

    // remove_back: remove o elemento que esta no final da lista
    // retorna o valor do no caso ele exista;
    // ou retorna INT_MIN caso não exista ultimo elemento
    int remove_back();

    void print();
    // remove: remove o primeiro no com valor x
    void remove(int x);

    // removeAll: remove todos os nos com valor x
    void removeAll(int x);
    // toString: retorna a lista como uma std::string
    std::string toString();

};


#endif