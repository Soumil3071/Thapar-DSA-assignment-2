#include <bits/stdc++.h>
using namespace std;

bool areAnagrams(string str1, string str2) {
    if (str1.size() != str2.size()) return false;
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    return str1 == str2;
}

int main() {
    cout << (areAnagrams("road", "dora") ? "Yes" : "No") << endl; 
    cout << (areAnagrams("jesus", "christ") ? "Yes" : "No") << endl;   
}
