#include<iostream>
#include<math.h>
#define n 20
using namespace std;

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
            cout<<"Stack Overflow..."<<endl;
            return;
        }
        top +=1;
        arr[top] = x;
    }

    int pop(){
        if(top == -1){
            cout<<"Stack empty..."<<endl;
            return -1;
        }
        top--;
    }

    int peak(){
        return arr[top];
    }

    int postfixEval(string s){
        for(int i=0; i < s.length(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                push(s[i]-'0');
            }else{
                int operand1 = peak();
                pop();
                int operand2 = peak();
                pop();

                switch(s[i]){
                case '+':
                    push(operand2 + operand1);
                    break;
                case '-':
                    push(operand2 - operand1);
                    break;
                case '/':
                    push(operand2 / operand1);
                    break;
                case '*':
                    push(operand2 * operand1);
                    break;
                case '^':
                    push(pow(operand2, operand1));
                }
            }
        }
        return peak();
    }

};

int main(){
    Stack st;
    int val = st.postfixEval("46+2/5*7+");
    cout<<val;
    return 0;
}
