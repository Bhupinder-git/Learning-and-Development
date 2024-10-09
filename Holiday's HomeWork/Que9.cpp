#include<iostream>
#include<vector>
using namespace std;

// Two sum problem :
vector<int> two_sum(vector<int> &arr,int target){
    
    // Used to store the index of numbers
    vector<int> ans;
    
    // Finding the numbers
    int i = 0;
    int j = arr.size()-1;
    while(i < j){
        int sum = arr[i] + arr[j];
        if(sum == target){
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
        else if(sum < target) i++;
        else j--;
    }
    return ans;
}

int main(){
    
    vector<int> arr = { 2, 7, 11, 15};
    int target = 9;
    
    vector<int> final_result = two_sum(arr,target);
    
    cout<<"Index of the elements are : ";
    for(int i = 0; i < final_result.size(); i++){
        cout<<final_result[i]<<" ";
    }
    
    return 0;
}