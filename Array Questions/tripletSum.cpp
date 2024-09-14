#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

vector<vector<int>> tripletSum(vector<int> &arr, int sum){
    int n = arr.size();
    set<vector<int>> st;
    for(int i = 0; i<n; i++){
        for(int j = i + 1; j<n; j++){
            for(int k = j + 1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == sum){
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    return ans;
}

int main() {
    
    vector<int> arr = { 10, 5, 5, 5, 2};
    int sum = 12;
    
    vector<vector<int>> ans = tripletSum(arr,sum);
    for(int i = 0; i<ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
