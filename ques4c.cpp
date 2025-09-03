#include <iostream>
#include <cstring>
using namespace std;
bool vowel(char a){
        if (a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            return true;
        }
        else if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            return true;
        }
        else{
            return false;
        }
    }
int main() {
    char j;
    int count=0;
    char b[50]="My name is Soham";
    for(int i=0;i<strlen(b);i++){
        if(vowel(b[i])==false){
            b[count]=b[i];
            count++;
        }
        
    }
    b[count]='\0';
    for (char j:b){
        if(j=='\0'){
            break;
        }
        cout<<j;
    }

    return 0;
}
