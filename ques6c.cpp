#include <bits/stdc++.h>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and cols of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and cols of second matrix: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Matrix multiplication not possible (c1 != r2)\n";
        return 0;
    }

    
    cout << "Enter elements of first matrix:\n";
    vector<vector<int>> mat1(r1, vector<int>(c1));
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> mat1[i][j];
        }
    }


    cout << "Enter elements of second matrix:\n";
    vector<vector<int>> mat2(r2, vector<int>(c2));
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> mat2[i][j];
        }
    }

    
    vector<Element> A, B;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            if (mat1[i][j] != 0) A.push_back({i, j, mat1[i][j]});
        }
    }
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            if (mat2[i][j] != 0) B.push_back({i, j, mat2[i][j]});
        }
    }

    
    vector<Element> M;
    for (size_t i = 0; i < A.size(); i++) {
        for (size_t j = 0; j < B.size(); j++) {
            if (A[i].col == B[j].row) {
                M.push_back({A[i].row, B[j].col, A[i].val * B[j].val});
            }
        }
    }

    
    vector<Element> C;
    for (size_t i = 0; i < M.size(); i++) {
        bool found = false;
        for (size_t j = 0; j < C.size(); j++) {
            if (M[i].row == C[j].row && M[i].col == C[j].col) {
                C[j].val += M[i].val;
                found = true;
                break;
            }
        }
        if (!found) C.push_back(M[i]);
    }

    
    cout << "Resultant matrix in sparse triplet form:\n";
    for (size_t i = 0; i < C.size(); i++) {
        cout << "(" << C[i].row << "," << C[i].col << "," << C[i].val << ") ";
    }
    cout << endl;

    return 0;
}
