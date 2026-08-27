#include<bits/stdc++.h>
using namespace std;
int reverse( int n){
   int  revn=0;
   int lastdigit;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        revn=(revn*10)+lastdigit;
    }
    return revn;
    }
    int main(){
        cout<<reverse(123456789);
        return 0;

    }


