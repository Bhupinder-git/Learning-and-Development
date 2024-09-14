#include<iostream>
#include<limits.h> // To use INT_MIN and INT_MAX functions
using namespace std;
int Min(int arr[], int n){
    int mini = INT_MAX;
    for(int i=0; i<n; i++){
        mini = min(mini,arr[i]);
        // if(mini>arr[i]) mini = arr[i];
    }
    return mini;
}

int Max(int arr[], int n){
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(maxi,arr[i]);
        // if(maxi<arr[i]) maxi = arr[i];
    }
    return maxi;
}

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
    cout<<"Enter the size of the array : ";
    cin>>n;

    int arr[n]; // Bad Practice

    Take_input(arr,n);
    Print_arr(arr,n);
    
    cout<<endl<<"Minimum Value : "<<Min(arr,n)<<endl;
    cout<<"Maximum Value : "<<Max(arr,n)<<endl;

    return 0;
}