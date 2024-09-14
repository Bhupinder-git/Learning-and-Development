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

// Program to Swap :
void swap(int arr[],int n){
    int i = 0;
    int j = n-1;
    while(i<j){
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;

    // One line to swap two no using function swap
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;


    int arr[n]; // Not a good practice

    Take_input(arr,n);
    cout<<"Elements of the array : ";
    Print_arr(arr,n);

    swap(arr,n);

    cout<<endl<<"Elements of the array : ";
    Print_arr(arr,n);

    return 0;
}