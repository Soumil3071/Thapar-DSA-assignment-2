#include <iostream>
using namespace std;
int main() {
    int n=7;
    int arr[n]={11,12,13,14,15,17,18};
   int start=0;
   int end=n-1;
   int x=15;
    while(start<=end){
        int mid=(start+end)/2;
        if (arr[mid]<x){
            start=mid+1;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }
        else if(arr[mid]==x){
            cout<<"index of "<<x<<" is "<<mid<<endl;
            break;
        }
        
        }
        
}
