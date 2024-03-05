#include<iostream>
using namespace std;
#define n 10

class Stack{
    int* arr;
    int top;

public:
    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top == n-1){
            cout<<"Stack overflow.."<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop(){
        if(top == -1){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        top--;
    }

    void reverseStack(){
        cout<<"Reversed elements are......"<<endl;
        int var = top;
        for(int i=0; i<top/2; i++){
            int temp = arr[var];
            arr[var] = arr[i];
            arr[i] = temp;
            var--;
        }
    }
    void display(){
        if(top == -1){
            cout<<"No element to display"<<endl;
            return;
        }
        cout<<"Elements are..."<<endl;
        for(int i=top; i>=0; i--){
            cout<<arr[i]<<" "<<endl;
        }
    }
};

int main(){
    Stack st;
    int x;
    for(int i=0; i<5; i++){
        cout<<"Enter the element you want to add in stack..."<<endl;
        cin>>x;
        st.push(x);
    }
    st.display();
    //st.pop();
    //st.display();
    st.reverseStack();
    st.display();
    return 0;
}
