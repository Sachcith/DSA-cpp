#include <iostream>
using namespace std;

#include "queue.hpp"
int main(){
    queue<int>q;
    for(int i=0;i<10;i++) q.push(i+1);
    int temp;
    for(int i=0;i<10;i++) if(q.pop(temp)) cout<<temp<<endl;
}

/*
#include "stack.hpp"
int main(){
    stack<int>s;
    for(int i=0;i<10;i++) s.push(i+1);
    int temp;
    for(int i=0;i<11;i++) if(s.pop(temp)) cout<<temp<<endl;
}
*/