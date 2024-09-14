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
// void sort012(vector<int> &arr){
    
//     int n = arr.size(); // stroing the size of array
    
//     // Storing the counts of 0's, 1's and 2's
//     int count0 = 0;
//     int count1 = 0;
//     int count2 = 0;
    
//     for(int i = 0; i<n; i++){
//         if(arr[i] == 0) count0++;
//         else if(arr[i] == 1) count1++;
//         else count2++;
//     }
    
//     // re-initializing the array 
//     int i = 0;
//     for( ; i<count0; i++ ) arr[i] = 0;
//     for( ; i<count0+count1; i++) arr[i] = 1;
//     for( ; i<count0+count1+count2; i++) arr[i] = 2;
    
//     return;
// }

// Dutch National Flag Algorithm :
void sort012(vector<int> &arr){
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
    while(mid<=high){
        if(arr[mid] == 0) swap(arr[mid++],arr[low++]);
        else if(arr[mid] == 1) mid++;
        else swap(arr[mid],arr[high--]);
    }
    return;
}

int main() {
    
    vector<int> arr = { 1, 0, 2, 1, 2, 1, 0, 2, 0, 1, 1};
    
    cout<<"Printing array before sorting : ";
    print_arr(arr);
    
    sort012(arr);
    
    cout<<endl<<"Printing array after sorting : ";
    print_arr(arr);
    
    return 0;
}
