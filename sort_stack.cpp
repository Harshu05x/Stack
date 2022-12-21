#include <iostream>
#include <stack>
using namespace std;



void storedInsert(stack <int> &s,int num){
    if(s.empty() || (!s.empty() && s.top() < num)){
        s.push(num);
        return ;
    }

    int x = s.top();
    s.pop();

    storedInsert(s,num);
    s.push(x);

}
void sort(stack <int> &s){
    if(s.empty()) return ;

    int num = s.top();
    s.pop();

    sort(s);

    storedInsert(s,num);
}
int main()
{
    stack <int> s;
    s.push(9);
    s.push(7);
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(6);
    s.push(-1); 
    s.push(9);
    s.push(7);
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(6);
    s.push(-1); 

    int x = s.size();
    sort(s);

    for(int i=0;i<x;i++){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}