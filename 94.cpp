#include<bits/stdc++.h>
using namespace std;
 vector<int>intersection(vector<int>a,vector<int>b,int n,int m){
    vector<int>vis(m,0);
    vector<int>ans;
    n=a.size();
    m=b.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]&&vis[j]==0){
                ans.push_back(a[i]);
                vis[j]=1;
                break;
            }
            if(b[j]>a[i])break;
        }
    }
    return ans;
 }
 int main(){
    vector<int>a={1,2,3,3,4};
    vector<int>b={2,2,3,4,4};
    int n=a.size();
    int m=b.size();
    vector<int> x=intersection(a,b,n,m);
    for(auto it:x)
    cout<<it<<endl;
    return 0;
 }