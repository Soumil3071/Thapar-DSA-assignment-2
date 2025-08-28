#include <iostream>
#include <cstring>
using namespace std;
bool comp(char a,char b){
    char lowA=tolower(a);
    char lowB=tolower(b);
    if(lowA==lowB){
        if(a>b){
            return true ;
        }
        else {
            return false;
        }
    }
    else if(lowA>lowB){
        return true;
}
    return false;
}
int main() {
    int a='a';
    char j;
    int count=0;
    string c="bacABcC";
    for(int i=0;i<c.length();i++){
        for(int j=0;j<c.length()-1;j++){
            if(comp(c[j],c[j+1])==true){
            
                char d=c[j];
                c[j]=c[j+1];
                c[j+1]=d;
                
            }
        }
    
    
    

    
}

for(int i=0;i<c.length();i++){
        cout<<c[i];
    }
    return 0;}
