#include<iostream>
using namespace std;

int binarySearch(int arr[],int l, int r, int x){
    while(l <= r){
        int m = l + (r-l)/2;
        if(arr[m] == x){
            return m;
        }
        if(x > arr[m]){
            l = m +1;
        }else{
            r = m-1;
        }
    }
    return -1;
}

int main(){
    //Q:-> Traversal in array.....................................................
    /*
    int arr[20] = {1,2,6,7,8,9};
    int i = 0;
    for(i=0; i<6; i++){
        cout<<i<<" "<<arr[i]<<endl;

    }
    */

    //Q:-> Insertion in array...................................................
    /*
    int pos,num, i;
    int arr[20] = {1,2,6,7,8,9};
    cout<<"Enter the element you want to insert and at what position: "<<endl;
    cin>>num>>pos;
    if(pos<0 && pos >20){
        cout<<"Invalid position"<<endl;
        return -1;
    }
    for(i=6; i>pos; i--)
        arr[i] = arr[i-1];
    arr[i] = num;

    // display the array...
    for(i=0; i<7; i++){
        cout<<arr[i]<<" ";
    }
    */

    //Q:-> Deletion operation...................................................
    //int num, i;
    //int arr[20] = {1,2,6,7,8,9};
    //cout<<"Enter the element you want to delete..."<<endl;
    //cin>>num;
    //for(i=0; i<6; i++){
    //if(arr[i] == num){
    //    for(int j=i; j<6; j++){
      //      arr[j] = arr[j+1];
        //}
    //}
    //}

    //for(int i=0; i<5; i++){
      //  cout<<arr[i]<<" ";
    //}


    //Q: Binary search...........................................................
    //int arr[] = {1,4,6,8,9,21,45,50};
    //int x = 9;
    //int n = sizeof(arr)/sizeof(int);
    //int result = binarySearch(arr, 0, n-1, x);
    //(result == -1) ? cout<<"The number is not present in the array": cout<<"The element is present at index "<<result;


    //Q: sorting an array.........................................................
    int arr[] = {2,1,6,4,10,3,8,7};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
