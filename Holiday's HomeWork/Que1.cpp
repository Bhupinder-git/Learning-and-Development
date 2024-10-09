#include <iostream>
using namespace std;

// Program to insert an element in an array at any position 

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
    int arr[n+1];
    
    // Taking input in the array :
    take_input(arr,n);
    
    // Printing the elements of the array : 
    print_arr(arr,n);
    cout<<endl;
    
    // Declaring the variable to store new element
    int x;
    cout<<"Enter the element you want to insert : ";
    cin>>x;
    
    int idx;
    cout<<"Enter the index at which element you want to insert : ";
    cin>>idx;
    
    // Inserting the new element at given index : 
    for(int i = n; i > idx; i--){
        // shifting the elements to the next index :
        arr[i] = arr[i-1];
    }
    
    // Now inserting that element
    arr[idx] = x;
    
    cout<<endl;
    
    // Again printing the array elements after inserting : 
    print_arr(arr,n+1);
    
    return 0;
}