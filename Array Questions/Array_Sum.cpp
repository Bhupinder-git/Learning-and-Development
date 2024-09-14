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

int sumArr(int arr[],int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans += arr[i];
    }
    return ans;
}

int main() {
    
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    
    int arr[n]; // Not a good practice
    
    takeInput(arr,n);
    printArr(arr,n);
    
    int sum = sumArr(arr,n);
    cout<<endl<<"Sum of the elments of the array : "<<sum<<endl;

    return 0;
}