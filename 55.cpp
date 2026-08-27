#include<bits/stdc++.h>
using namespace std;
int main(){
    string v="123";
    
    do{
        cout<<v<<endl;
    }while(next_permutation(v.begin(),v.end()));
    return 0;
}
/*output:
123
132
213
231
312
321
*/
