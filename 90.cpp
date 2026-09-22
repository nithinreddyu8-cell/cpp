#include<bits/stdc++.h>
using namespace std;
void left(int n,int d,int arr[]){
    vector<int>temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    int j=0;
    for(int i=n-d;i<n;i++){
        arr[i]=temp[j];
        j++;
    }
    

}
int main(){
    int n;
    int d;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++ ){
        cin>>arr[i];
        
    }
    left(n,d,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}