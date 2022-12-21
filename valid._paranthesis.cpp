// Check valid Paranthesis
#include <iostream>
#include <stack>
using namespace std;

bool match(char top, char ch){
    if( (ch == ")" && top == "(" ) ||
            (ch == ")" && top == "(" ) || 
                (ch == ")" && top == "(" ) ) return true;

}

bool valid(stack <char> s, string expres){
    char ch;
    for(int i=0;i<expres.length();i++){
        ch = expres[i];
        if(ch == "(" || ch == "[" || ch == "{"){
            s.push(i);
        }
        else{
            if(s.empty()) return false;
            char top = s.top();
            if(match(top,ch)){
                s.pop();
            }
            else return false;
        }
    }
}
                   
int main()
{   
    stack <char> s;
    string expres = "{[()]}";

    valid(s,expres);
    
     
    return 0;
}