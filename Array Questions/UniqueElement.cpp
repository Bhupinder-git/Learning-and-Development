#include <iostream>
#include <limits.h>
using namespace std;

void takeInput(int arr[],int n){
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0; i<n; i++){
        cout<<"arr["<<i<<"] : ";
        cin>>arr[i];
    }
    cout<<endl;
}

void printArr(int arr[],int n){
    cout<<"Elements of the array : ";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    return;
}

int findUnique(int arr[],int n){
    for(int i = 0; i<n; i++){
        bool isUnique = true;
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j] && i!=j ){
                isUnique = false;
                break;
            } 
        }
        if(isUnique) return arr[i];
    }
    return -1;
}

int main() {
    
    int arr[5] = {1,2,2,3,1};

    printArr(arr,5);
    
    int res = findUnique(arr,5);
    cout<<"Unique Element in the array is "<<res<<endl;
    
    return 0;
}