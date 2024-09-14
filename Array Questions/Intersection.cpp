#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

vector<int> array_Intersection(vector<int> &a, vector<int> &b){
    vector<int> ans;
    for(int i = 0; i<a.size(); i++){
        for(int j = 0; j<b.size(); j++){
            if(a[i] == b[j]){
                ans.push_back(a[i]);
                a[i] = INT_MAX;
                b[j] = INT_MIN;
            }
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