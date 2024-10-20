#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <unordered_map>

using namespace std;

int minOperationsToNullify(vector<int>& arr, vector<int>& change) {
    int n = arr.size();
    int m = change.size();

    
    priority_queue<pair<int, int>> maxHeap;
    unordered_map<int, int> changeMap;

    
    for (int i = 0; i < m; ++i) {
        if (change[i] > 0) {
            changeMap[change[i] - 1] = i; 
        }
    }

    
    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) {
            maxHeap.push({arr[i], i});
        }
    }

    int operations = 0;

    
    while (!maxHeap.empty()) {
        int value = maxHeap.top().first;
        int idx = maxHeap.top().second;
        maxHeap.pop();

        if (arr[idx] > 0) {
            operations += arr[idx];  
            arr[idx] = 0;  

            if (changeMap.count(idx)) {
                
                operations++;  
            } else {
                return -1; 
            }
        }
    }

    return operations;
}

int main() {
    vector<int> arr = {3, 4};
    vector<int> change = {1};  // Assuming 1-based index as mentioned in the problem

    int result = minOperationsToNullify(arr, change);

    if (result == -1) {
        cout << "Not enough operations available to change all non-zero elements to NULL." << endl;
    } else {
        cout << "Minimum number of operations required: " << result << endl;
    }

    return 0;
}