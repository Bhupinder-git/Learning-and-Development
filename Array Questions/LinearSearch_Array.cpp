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

// Linear Search
bool is_present(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return 1;
            break;
        }
    }
    return 0;
}
int main(){
    int n;
    cout<<"Enter the size : ";
    cin>>n;


    int arr[n]; // Not a good practice

    Take_input(arr,n);
    // Print_arr(arr,n);

    int key;
    cout<<"Enter the element you want to search : ";
    cin>>key;

    if(is_present(arr,n,key)) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

    return 0;
}