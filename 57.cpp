#include<bits/stdc++.h>
using namespace std;
int amstrong(int n){
int sum=0;
int dup=n;
int ld;
while(n>0){
ld=n%10;
sum=sum+(ld*ld*ld);
n=n/10;

}
if (sum==dup)
cout<<"amstrong"<<endl;
else
cout<<"not amstrong"<<endl;
}
int main(){
    int n;
    cin>>n;
    amstrong(n);
    return 0;
}
/*int main(){
    int n=371;
   int revn=0;
   int dup=n;
   int sum=0;
 int ld;
while(n>0){
ld=n%10;
sum=sum+(ld*ld*ld);
n=n/10;
revn=(revn*10)+ld;

}
if (sum==dup)
cout<<"amstrong"<<endl;
else
cout<<"not amstrong"<<endl;
return 0;
}*/