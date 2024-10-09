#include<iostream>
using namespace std;

// Creating a 2D array :
int main(){
    
    int m;
    int n;
    
    cout<<"Enter the no of rows : ";
    cin>>m;
    
    cout<<"Enter the no of columns : ";
    cin>>n;
    
    // Declaration of the array : 
    int arr[m][n];
    cout<<endl;
    
    // Taking input in a 2D array :
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0; i < m; i++){
        cout<<endl<<"Enter the elements of the row "<<i+1<<" : "<<endl;
        for(int j = 0; j < n; j++){
            cout<<"arr["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }
    
    // Printing the elements of the array :
    cout<<endl<<"Elements of the array are : "<<endl;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}