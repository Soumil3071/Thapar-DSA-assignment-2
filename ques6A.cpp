#include <bits/stdc++.h>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    
    vector<vector<int>> mat(rows, vector<int>(cols));
    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    
    vector<Element> A;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat[i][j] != 0) {
                A.push_back({i, j, mat[i][j]});
            }
        }
    }

    
    vector<Element> T;
    for (int i = 0; i < A.size(); i++) {
        T.push_back({A[i].col, A[i].row, A[i].val});
    }

    int n = T.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (T[j].row > T[j + 1].row ||
               (T[j].row == T[j + 1].row && T[j].col > T[j + 1].col)) {
                Element temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }

    
    cout << "Transpose of sparse: \n";
    for (int i = 0; i < n; i++) {
        cout << "(" << T[i].row << "," << T[i].col << "," << T[i].val << ") ";
        cout<<endl;
    }
    cout << endl;

    return 0;
}
