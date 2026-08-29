#include<bits/stdc++.h>
using namespace std;
void twosum(int n,int arr[] ){
    int target=14;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target)
            cout<< i<<","<<j<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    twosum(n,arr);
    return 0;

}