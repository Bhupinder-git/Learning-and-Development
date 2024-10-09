#include <iostream>
using namespace std;

// Program to delete an element in an array at any position 

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
    cout<<endl;
    
    // Declaring the variable to store the element to be deleted
    int x;
    cout<<"Enter the element you want to delete : ";
    cin>>x;
    
    // Shifting all elements : 
    for(int i = 0; i < n; i++){
        // getting the index of that element :
        if(arr[i] == x){
            int j = i;
            while(j<n-1){
                arr[j] = arr[j+1];
                j++;
            }
            break;
        }
    }
    
    // Again printing the array elements after deleting : 
    print_arr(arr,n-1);
    
    return 0;
}