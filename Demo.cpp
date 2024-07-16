#include<iostream>
using namespace std;
int main(){
    int arr[]={23,43,1,34,65,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
                flag=false;
            }
        }
        if(flag) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}