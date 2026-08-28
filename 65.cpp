#include<bits/stdc++.h>
using namespace std;

void SLargest(int n,int arr[]){
    int largest=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>arr[0]){
        largest=arr[i];
    }
    int slargest=-1;
    for(i=0;i<n;i++){
        if(arr[i]>slargest && arr[i]!=largest){ 
            slargest=arr[i];
        }
    }
cout<<slargest<<" ";
}

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    SLargest(n,arr);
    
    return 0;

}