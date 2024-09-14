#include <iostream>
using namespace std;

void takeInput(int arr[], int n){
    cout<<endl<<"Enter the elments of the array : "<<endl;
    for(int i = 0; i<n; i++){
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<endl;
    return;
}

void printArr(int arr[], int n){
    cout<<"Elements of the array : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return;
}

void update_arr(int arr[],int n){
    arr[0] = 106;
    cout<<endl<<"Printing array inside the function call : "<<endl;
    printArr(arr,n);
    cout<<endl;
    return;
}
int main() {
    
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    
    int arr[n]; // Not a good practice
    
    takeInput(arr,n);
    cout<<"Printing the elments of the array before function call : "<<endl;
    printArr(arr,n);
    
    update_arr(arr,n);
    
    cout<<"Printing the elments of the array after function call : "<<endl;
    printArr(arr,n);

    return 0;
}