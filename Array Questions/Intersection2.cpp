#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> array_Intersection(vector<int> &a, vector<int> &b){
    // first sort both the arrays 
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    vector<int> ans;
    
    int i = 0; // iterates over the first array
    int j = 0; // iterates over the second array
    while(i<a.size() && j<b.size()){
        if(a[i] == b[j]){
            ans.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i] < b[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}
int main() {
    
    vector<int> a = {1,4,6,9,91};
    vector<int> b = {9,2,4,4,1};
    
    vector<int> ans = array_Intersection(a,b);
    
    cout<<"Intersection of both the arrays : ";
    for(int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}