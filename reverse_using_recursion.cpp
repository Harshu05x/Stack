#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack <int> &s,int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num = s.top();
    s.pop();
    insertAtBottom(s,x);
    s.push(num);
}

void reverse(stack <int> &s){
    if(s.empty()){
        return ;
    }
    int num = s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,num);
}
                   
int main()
{
    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reverse(s);

    int x = s.size();
    for(int i=0;i<x;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}