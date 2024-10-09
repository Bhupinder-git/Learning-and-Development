#include <iostream>
#include <limits.h>
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
    
    // Program to find the second largest element in the array
    int maxi = INT_MIN;
    int max_idx = 0;
    for(int i = 0; i<n; i++){
        if(maxi < arr[i]) {
            maxi = arr[i];
            max_idx = i;
        }
    }
    int second_maxi = INT_MIN;
    int second_max_idx = 0;
    for(int i = 0; i < n; i++){
        if(second_maxi < arr[i] && i != max_idx){
            second_maxi = arr[i];
            second_max_idx = i;
        }
    }
    
    cout<<"Maximum Element -->> "<<maxi<<endl;
    cout<<"Second Maximum Element -->> "<<second_maxi<<endl;
    
    return 0;
}