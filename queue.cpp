#include<iostream>
#define n 20
using namespace std;

class Queue{
    int* arr;
    int frt, rare;

public:
    Queue(){
        arr = new int[n];
        frt = -1;
        rare = -1;
    }

    void enqueue(int x){
        if(rare == n-1){
            cout<<"Queue Overflow..."<<endl;
            return;
        }
        rare++;
        arr[rare] = x;

        if(frt == -1){
            frt++;
        }
    }

    int dequeue(){
        if(frt == -1 || frt > rare){
            cout<<"Queue underflow..."<<endl;
            return -1;
        }
        frt++;
    }

    int peak(){
        return arr[frt];
    }

    void display(){
        cout<<endl;
        for(int i=frt; i<= rare; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    Queue q1;
    int x;
    for(int i=0; i<5; i++){
    cout<<"Enter the element you want to insert in queue..."<<endl;
        cin>>x;
        q1.enqueue(x);
    }

    q1.display();
    q1.dequeue();
    q1.display();
    return 0;
}
