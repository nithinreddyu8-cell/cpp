#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>m={1,2,3,4,5};
    m.insert(3);
    auto it=m.find(2);
    cout<<(*it);
    return 0;
}
//output:2
