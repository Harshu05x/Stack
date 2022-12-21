#include <iostream>
#include <stack>
using namespace std;

void delte(stack<int> &s1,int count,int x){
    if(count == x/2){
        s1.pop();
        return ;
    }

    int num = s1.top();
    s1.pop();

    delte(s1,count+1,x);
    s1.push(num);
}    
int main()
{
    int count = 0;
    stack <int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    int x = s1.size();

    delte(s1,count,x);

     x = s1.size();

    for(int i=0 ; i<x; i--){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
    return 0;
}