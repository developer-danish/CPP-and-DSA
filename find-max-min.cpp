#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array..."<<endl;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(i=0; i<n; i++){
        /*if(largest < arr[i+1]){
            largest = arr[i+1];
        } */
        maxNo = max(maxNo, arr[i]);
        minNo = min(maxNo, arr[i]);
    }
    //cout<<largest<<endl;
    cout<<"maximum is : "<<maxNo<<", minimum is : "<<minNo;
}
