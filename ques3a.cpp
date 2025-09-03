#include <iostream>
using namespace std;

int main() {
    int n = 7;
    int arr[n] = {12, 13, 15, 16, 18, 19, 21};

    int diff = arr[0] - 0;
    for (int i = 0; i < n; i++) {
        while (arr[i] - i > diff) {
            cout << "Missing element: " << i + diff << endl;
            diff++;
        }
    }
    return 0;
}
