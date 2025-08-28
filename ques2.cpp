#include <iostream>
using namespace std;
int main() {
    int n=7;
    int arr[n]={64,34,25,12,22,11,90};
    for(int i=0;i<n-1;i++){
        bool flag=false;
        for(int j=0;j<n-1;j++){
            
            if(arr[j]>arr[j+1]){
               flag=true;
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
               
            }
            
           
        }
        if(flag==false){
                break;
            }
        
    }
cout<<"Sorted array is:-"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}
    return 0;
}
