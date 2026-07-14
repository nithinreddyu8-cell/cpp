#include<iostream>
using namespace std;
class name{
    public:
    int height;
    int weight;
name(int h,int w){
height=h;
weight=w;
}
name(name &c){
  height=c.height;
  weight=c.weight;
}

};
int main(){
    name rakesh(10,60);
    name nithin=rakesh;
cout<<"the height is: "<<rakesh.height<<endl;
cout<<"the weight is: "<<rakesh.weight<<endl;
    return 0;
}