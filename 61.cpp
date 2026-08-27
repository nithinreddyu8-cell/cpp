#include<bits/stdc++.h>
using namespace std;
int sort(int n,int arr[]){
int min;
for(int i=0;i<n-2;i++){
    min=i;
    for(int j=i;j<n-1;j++){
        if(arr[j]<arr[min]){
            min=j;
        }
    }


int temp=arr[min];
arr[min]=arr[i];
arr[i]=temp;
}
}
int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
sort(n,arr);
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;

    

}

