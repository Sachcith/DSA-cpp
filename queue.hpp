#ifndef queue_H
#define queue_H

template <class T>
class queue{
    private:
        class Node{
            public:
                T data;
                Node* next;
        };
        int n;
        Node* front;
        Node* rear;
    public:
        queue();
        int size();
        void push(T x);
        bool pop(T &x);
        bool isEmpty();
        bool peek(T &x);
};

template <class T>
queue<T>::queue(){
    n = 0;
    front = nullptr;
    rear = nullptr;
}

template <class T>
int queue<T>::size(){
    return n;
}

template <class T>
void queue<T>::push(T x){
    n++;
    Node* new_Node = new Node;
    new_Node->data = x;
    if(front==nullptr){
        front = new_Node;
        rear = new_Node;
        return;
    }
    rear->next = new_Node;
    rear = new_Node;
}

template <class T>
bool queue<T>::pop(T &x){
    if(n==0) return false;
    n--;
    x = front->data;
    front = front->next;
    return true;
}

template <class T>
bool queue<T>::peek(T &x){
    if(n==0) return false;
    x = front->data;
    return true;
}

template <class T>
bool queue<T>::isEmpty(){
    if(n==0) return true;
    return false;
}
#endif