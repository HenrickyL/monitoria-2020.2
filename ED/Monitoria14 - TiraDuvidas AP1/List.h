#ifndef LIST_H
#define LIST_H

struct node;


class List{
private:
    node* _head;
    int _size=0;
public:
    List();
    ~List();
    void push_back(int key);
    int pop_back();
    void insertAfter(int key, int k);
    void remove(int key);
    void removeAll(int key);
    void print();
    void printReverse();
    bool empty();
    int size();
    void clear();
    void concat(List *lst);
    List *copy();
    void copyArray(int n, int arr[]);
    bool equal(List *lst);

};



#endif