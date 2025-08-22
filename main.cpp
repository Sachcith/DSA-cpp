#include <iostream>
#include "stack.hpp"
using namespace std;

int main(){
    stack<int>s;
    for(int i=0;i<10;i++) s.push(i+1);
    int temp;
    for(int i=0;i<11;i++) if(s.pop(temp)) cout<<temp<<endl;;
}