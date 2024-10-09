#include <iostream>
using namespace std;

// Program to reverse the element in the array  

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

void reverse(int arr[],int n){
    int start = 0;
    int end = n - 1;
    while(start < end){
        // Swapping elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        
        start++;
        end--;
    }
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
    
    // calling the function to reverse the array elements : 
    reverse(arr,n);
    
    // Printing the array after reversing :
    print_arr(arr,n);
    
    return 0;
}