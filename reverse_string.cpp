#include <iostream>
#include <stack>
using namespace std;
                   
int main()
{
    stack <char> s1;
    string ch = "hsraH olleH";

    for(char i : ch){
        s1.push(i);
    }

    int x = s1.size();
    string ans = "";
    for(int i=0;i<x;i++){
        ans += s1.top();
        s1.pop();
    }

    cout<<ans<<endl;

    return 0;
}