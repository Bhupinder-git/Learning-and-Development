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

// Brute_Force
// void sort01(vector<int> &arr){
    
//     int n = arr.size(); // stroing the size of array
    
//     // Storing the counts of 0's and 1's
//     int count0 = 0;
//     int count1 = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[i] == 0) count0++;
//         else if(arr[i] == 1) count1++;
//     }
    
//     // re-initializing the array 
//     int i = 0;
//     for( ; i<count0; i++ ) arr[i] = 0;
//     for( ; i<count0+count1; i++) arr[i] = 1;
    
//     return;
// }

// Two Pointer approach :

void sort01(vector<int> &arr){
    int i = 0;
    int j = arr.size() - 1;
    while(i < j){
        while(arr[i] == 0 && i<j) i++;
        while(arr[j] == 1 && i<j) j--;
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return;
}


int main() {
    
    vector<int> arr = { 1, 0, 1, 1, 0, 0, 1, 1};
    
    cout<<"Printing array before sorting : ";
    print_arr(arr);
    
    sort01(arr);
    
    cout<<endl<<"Printing array after sorting : ";
    print_arr(arr);
    
    return 0;
}
