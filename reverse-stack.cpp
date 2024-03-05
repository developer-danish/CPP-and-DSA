#include<iostream>
using namespace std;
#define n 10

class Stack{
    char* arr;
    int top;
public:
    Stack(){
        arr = new char[n];
        top = -1;
    }

    void push(char x){
        if(top == n-1){
            cout<<"stack is full..."<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    char pop(){
        if(top == -1){
            cout<<"Stack underflow..."<<endl;
            return -1;
        }
        char ch = arr[top];
        top--;
        return ch;
    }

    int retTop(){
        return top;
    }

    void display(){
        if(top == -1){
            cout<<"No element to display"<<endl;
            return;
        }
        for(int i=top; i>= 0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
    Stack s1;
    Stack s2;

    s1.push('D');
    s1.push('A');
    s1.push('N');
    s1.push('I');
    s1.push('S');
    s1.push('H');

    s1.display();

    for(int i=s1.retTop(); i>=0; i--){
        s2.push(s1.pop());
    }
    s2.display();

    return 0;
}
