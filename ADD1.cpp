#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());  
    int i = 0, j = 1, count = 0, n = arr.size();

    while (i < n && j < n) {
        if (i == j) { 
            j++; 
            continue;
        }

        int diff = arr[j] - arr[i];
        if (diff == k) {
            count++;
            i++;
            j++;
        } 
        else if (diff < k) {
            j++;
        } 
        else { // diff > k
            i++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 5, 3, 4, 2};
    int k = 2;
    cout << countPairs(arr, k) << endl; 
    return 0;
}
