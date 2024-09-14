#include <iostream>
#include <vector>
using namespace std;

void print_arr(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void swap_alternate(vector<int> &arr){
    int n = arr.size();
    int i = 0;
    while(i+1 < n){
        swap(arr[i],arr[i+1]);
        i+=2;
    }
    return;
}

int main() {
    
    vector<int> arr = { 10, 11, 43, 91, 0, 2, 1};
    
    cout<<"Printing array before swaping alternate elements : ";
    print_arr(arr);
    
    swap_alternate(arr);
    
    cout<<endl<<"Printing array after swaping alternate elements : ";
    print_arr(arr);
    
    return 0;
}
