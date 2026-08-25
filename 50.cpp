#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,int>m={{1,2},{2,3},{1,4}};
    auto it=m.find(2);
    cout<<(*it).second;
    return 0;
}
//output:3
