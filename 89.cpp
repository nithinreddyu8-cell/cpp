#include<bits/stdc++.h>
using namespace std;
int main(){
    int i=0;
    
    int arr[]={1,1,1,2,2,2,3,3,3};
    int n=sizeof(arr);
    for(int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
        
    }
    cout << i+1;

    return 0;
}