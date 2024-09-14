#include <iostream>
using namespace std;

int main() {
    
    // Declaration of an array along initialization using the intializer list
    int arr[10] = {11,22,33,44,55,66,77,88,99,100};
    
    cout<<"Elements of the array : ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    
    // But if we want to initialize the entire array with 0, we can do as :
    int brr[10] = {0};
    cout<<"Elements of the array : ";
    for(int i=0; i<10; i++){
        cout<<brr[i]<<"\t";
    }
    cout<<endl;
    
    // But if we want to re-initialize the array with another element than 0, we can do as :
    
    fill_n(brr,10,5);
    cout<<"Elements of the array : ";
    for(int i=0; i<10; i++){
        cout<<brr[i]<<"\t";
    }
    

    return 0;
}