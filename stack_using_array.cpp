#include <iostream>
using namespace std;

class Stack{
    int size;
    int top;
    int *st;

    public:
    Stack(int size){
        this->size = size;
        this->top = -1;
        this->st = new int[size];
    }
    void display();
    void push(int x);
    int pop();
    int peek(int pos);
    int stackTop();
    int isEmpty();
    int isFull();
};

void Stack :: display(){
    int i = this->top;
    for( ; i>=0 ; i--){
        cout<<this->st[i]<<" ";
    }
    cout<<endl;
}

void Stack :: push(int x){
    if(this->top == this->size-1){
        cout<<"Stack Overflow"<<endl;
    }
    else {
        this->top++;
        this->st[this->top] = x;
    }
}

int Stack :: pop(){
    int x;
    if(this->top == -1) {
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    else {
        x = this->st[this->top--];
    }
    return x;

}

int Stack :: peek(int pos){
    if(this->st[this->top-pos+1] < 0){
        cout<<"Invalid Position."<<endl;
        return -1;
    }
    else return this->st[this->top-pos+1];
}

int Stack :: stackTop(){
    if(this->top == -1) return -1;
    else return this->st[this->top];
} 

int Stack :: isEmpty(){
    if(this->top == -1) return 1;
    return 0;
}

int Stack :: isFull(){
    if(this->top == this->size-1) return 1;
    return 0;
}

int main()
{
    Stack s1(5);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);
    s1.display();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();

  
    // cout<<s1.peek(3);
    // cout<<s1.stackTop();
     
    return 0;
}