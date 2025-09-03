#include <iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={11,12,13,14,15,17};
   int start=0;
   int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==arr[0]+mid){
            start=mid+1;
        }
        if(arr[mid]!=arr[0]+mid){
            end=mid-1;
        }
        
        }
        cout<<"missing element is "<<arr[0]+start;
        
    }
