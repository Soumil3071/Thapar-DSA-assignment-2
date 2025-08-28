#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char a[10]="hello";
    char b[10]=" world";
    string c="HELLO ";
    string d="WORLD";
    strcat(a,b);
    cout<<a<<endl;
    cout<<c+d<<endl;
  

    return 0;
}
