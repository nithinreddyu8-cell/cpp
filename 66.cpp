#include<bits/stdc++.h>
using namespace std;

bool sort(int n,int arr[]){

for(int i=0;i<n;i++){
    if(arr[i]>=arr[i-1]){
        return true;
    }
}


return false;
    
    


}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
   cout<< sort(n,arr);
    
    return 0;

}