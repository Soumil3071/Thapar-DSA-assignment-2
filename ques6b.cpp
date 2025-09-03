#include <bits/stdc++.h>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;


    cout << "Enter elements of first matrix:\n";
    vector<vector<int>> mat1(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }


    cout << "Enter elements of second matrix:\n";
    vector<vector<int>> mat2(rows, vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }

    
    vector<Element> A, B;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mat1[i][j] != 0) A.push_back({i, j, mat1[i][j]});
            if (mat2[i][j] != 0) B.push_back({i, j, mat2[i][j]});
        }
    }

    
    vector<Element> C;
    size_t i = 0, j = 0;

    while (i < A.size() && j < B.size()) {
        if (A[i].row == B[j].row && A[i].col == B[j].col) {
            int sum = A[i].val + B[j].val;
            if (sum != 0) C.push_back({A[i].row, A[i].col, sum});
            i++; j++;
        }
        else if (A[i].row < B[j].row || 
                (A[i].row == B[j].row && A[i].col < B[j].col)) {
            C.push_back(A[i]);
            i++;
        }
        else {
            C.push_back(B[j]);
            j++;
        }
    }

    // Append remaining elements
    while (i < A.size()) C.push_back(A[i++]);
    while (j < B.size()) C.push_back(B[j++]);

    
    cout << "Resultant sparse matrix after addition:\n";
    for (size_t k = 0; k < C.size(); k++) {
        cout << "(" << C[k].row << "," << C[k].col << "," << C[k].val << ") ";
    }
    cout << endl;

    return 0;
}
