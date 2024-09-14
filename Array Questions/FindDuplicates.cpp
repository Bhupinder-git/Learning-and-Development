#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findDuplicates(vector<int> &arr) {
    // First sort the array to make duplicate finding easier
    sort(arr.begin(), arr.end());

    vector<int> ans;
    for (int i = 0; i < arr.size() - 1; i++) {
        // If the current element is the same as the next one, it is a duplicate
        if (arr[i] == arr[i + 1]) {
            // To avoid adding the same duplicate multiple times
            if (ans.empty() || ans.back() != arr[i]) {
                ans.push_back(arr[i]);
            }
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 9, 8, 7, 6, 9, 8, 1, 4};

    vector<int> ans = findDuplicates(arr);

    cout << "Duplicate elements in the array: ";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
