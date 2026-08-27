#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,1,3,4,5};
    sort(v.begin(),v.end(),greater<int>());
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}
//output:5 4 3 2 1
