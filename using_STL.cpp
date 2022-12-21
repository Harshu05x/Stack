#include <iostream>
#include <stack>
using namespace std;
                   
int main()
{
    // Syntax stack <data_type> stack_name ;
    stack <int> s1;
    stack <int> s2;
    // Insert ele in stack
    s1.push(5);
    s1.push(6);
    s1.push(3);
    s1.push(4);

    //Check is stack empty or not
    cout<<s1.empty()<<endl;
    // Checking size of stack
    cout<<s1.size()<<endl;
    // top elements of stack
    cout<<s1.top();

    // traverse through stack
    while(! s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }

    // s1.emplace(1);    
    // s1.emplace(1);    
    // s1.emplace(1);    
    // s1.emplace(1);    

    cout<<s1.size();

    s2.push(1);
    s2.push(1);
    s2.push(1);
    s2.push(1);

    // swap all ele in s1 with s2
    s1.swap(s2);


    return 0;
}