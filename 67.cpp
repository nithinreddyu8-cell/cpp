#include<bits/stdc++.h>
using namespace std;
void sort(int n,int arr[]){
set<int>st;

for(int i=0;i<n;i++){
    st.insert(arr[i]);
    }
    for(auto it:st){
        cout<<it<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    sort(n,arr);
    
    return 0;

}