#include <iostream>
#include <limits.h>
using namespace std;

// Program to find the maximum and minimum element in the array  

void take_input(int arr[],int n){
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0; i < n; i++){
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<endl;
    return;
}

void print_arr(int arr[],int n){
    cout<<"Elements of the array : ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}
int main() {
    
    // Taking the input of the size of the array 
    int n;
    cout<<"Enter the no of elements in the array : ";
    cin>>n;
    
    cout<<endl;
    
    // Declaring array of size n :
    int arr[n];
    
    // Taking input in the array :
    take_input(arr,n);
    
    // Printing the elements of the array : 
    print_arr(arr,n);
    
    // Finding the maximum and minimum element in the array : 
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i] > maxi) maxi = arr[i];
        if(arr[i] < mini) mini = arr[i];
    }
    
    cout<<"Maximum Element -->> "<<maxi<<endl;
    cout<<"Minimum Element -->> "<<mini<<endl;
    
    return 0;
}