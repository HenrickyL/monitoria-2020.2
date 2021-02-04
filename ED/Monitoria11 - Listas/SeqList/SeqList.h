#ifndef SEQLIST_H
#define SEQLIST_H

#include <iostream>

class SeqList{
private:
    int* _v;
    int _capacity;
    int _size; 
public:
    // Construtor: recebe como argumento a capacidade n da lista.
    SeqList(int n);                     //O(1)


    // Destrutor: libera memoria alocada. Apos liberar a memoria alocada,
    // o destrutor deve escrever na tela a mensagem: "lista removida"
    ~SeqList();                         //O(1)


    // Recebe um inteiro x como argumento e adiciona o inteiro x logo apos o ultimo elemento da lista.
    // Retorna 'true' se for bem sucedido, ou 'false' caso contrario. Nenhum elemento deve ser adicionado se a lista estiver cheia.

    bool add(int x);                    //O(1)



    // Remove o primeiro valor x que estiver na lista
    // Se nao remover nenhum valor x retorna false;
    // caso contrario retorna true.
    bool remove(int x);                 //O(n)



    // Busca um elemento x e retorna seu indice se ele existir; ou retorna -1 caso contrario.
    int search(int x);                  //O(n)



    // Retorna o elemento no indice k. Supoe que o indice passado eh valido.
    int at(int k);                      //O(1)

    void print();

    // Retorna o numero de elementos na lista
    int size();                         //O(1)



    // Retorna true se lista estiver cheia; ou retorna false caso contrario.
    bool isFull();                      //O(1)



    // Deixa a lista vazia, ou seja, com size() == 0
    void clear();                       //O(1)



    // Retorna a lista como uma std::string
    // Por exemplo, se a lista tiver elementos 2,5,7,8 nesta ordem
    // entao deve ser retornada a string "[2,5,7,8]"
    // Se, por outro lado, a lista estiver vazia, deve
    // ser retornada a string "[]"
    std::string toString();             //O(n)

    // Member function: bool replaceAt(int x, int k);
    // Troca o elemento na posicao com indice k pelo elemento x,
    // somente se 0 <= k <= size()-1.
    // Retorna true se a troca for feita com sucesso;
    // ou retorna false caso contrario.
    bool replaceAt(int x, int k);       //O(1)

    // Member function: bool removeAt(int k);
    // Remove da lista o elemento com indice k.
    // Para que a remocao seja realizada, deve-se ter 0 <= k <= size()-1.
    // Os elementos resultantes devem ter a mesma ordem relativa
    // na lista apos a remocao do elemento com indice k.
    // A funcao retorna true se a remocao for feita com sucesso;
    // ou retorna false caso contrario.
    bool removeAt(int k);  

    // Member function: bool insertAt(int x, int k);
    // Adiciona o elemento x na posicao com indice k da lista,
    // somente se 0 <= k <= size() e size() < capacity_vec.
    // Antes de fazer a insercao, todos os elementos da
    // posicao k em diante sao deslocados uma posicao para a direita.
    // A funcao retorna true se a insercao for feita com sucesso;
    // ou retorna false caso contrario.
    bool insertAt(int x, int k);

    // Member function: void removeAll(int x);
    // Remove todas as ocorrencias do elemento x da lista.
    // Na implementacao desta funcao esta impedido o uso de quaisquer outras funcoes.
    // Escreva o codigo desta funcao sem chamar qualquer outra funcao.
    void removeAll(int x);



};


#endif