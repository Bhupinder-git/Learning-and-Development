#include<iostream>
using namespace std;

void Take_input(int arr[],int n){
    for(int i = 0; i<n; i++){
        cout<<"Enter "<<i+1<<" element : ";
        cin>>arr[i];
    }
    return;
}

// Program to print the array
void Print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;

    int arr[n]; // Not a good practice

    //Program to print the size of any array 
    cout<<"Size of array : "<<sizeof(arr)/sizeof(int)<<endl;
    Take_input(arr,n);

    Print_arr(arr,n);

    return 0;
}