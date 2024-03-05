#include<iostream>
using namespace std;

int arr[10], top = -1;
int length = sizeof(arr)/sizeof(int);

void push(int x){
    if(top >= length-1){
        cout<<"Stack is full..."<<endl;
    }else{
        top++;
        arr[top] = x;
    }
}

int pop(){
    if(top == -1){
        cout<<"Stack is empty..."<<endl;
        return -1;
    }
    int val = arr[top];
    top--;
}

void display(){
    if(top == -1){
        cout<<"No element to display..."<<endl;
        return;
    }
    cout<<"Elements are....."<<endl;
    for(int i=top; i>=0; i--){
        cout<<arr[i]<<" "<<endl;
    }
}

int main(){
    int x;
    for(int i=0; i<5; i++){
        cout<<"Enter the element you want to add."<<endl;
        cin>>x;
        push(x);
    }
    display();
    pop();
    display();
    return 0;
}
