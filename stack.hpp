#ifndef stack_H
#define stack_H


template <class T>
class stack{
    private:
        class Node{
            public:
                T data;
                Node* next;
        };
        int n;
        Node* top;
    public:
        stack();
        int size();
        void push(T x);
        bool pop(T &x);
        bool isEmpty();
        bool peek(T &x);
};

template <class T>
stack<T>::stack(){
    n = 0;
    top = nullptr;
}

template <class T>
int stack<T>::size(){
    return n;
}

template <class T>
void stack<T>::push(T x){
    n++;
    Node* new_Node = new Node;
    new_Node->data = x;
    new_Node->next = top;
    top = new_Node;
}

template <class T>
bool stack<T>::pop(T &x){
    if(n==0) return false;
    n--;
    x = top->data;
    top = top->next;
    return true;
}

template <class T>
bool stack<T>::peek(T &x){
    if(n==0) return false;
    x = top->data;
    return true;
}

template <class T>
bool stack<T>::isEmpty(){
    if(n==0) return true;
    return false;
}

#endif