#include<iostream>
using namespace std;
class myclass{
    public:
    int num1;
    int num2;
    void showdata(){
    cout<<"sum:"<<(num1+num2)<<endl;
    }
void setdata(int a,int b);
};
void myclass::setdata(int a,int b){
    num1=a;
    num2=b;
}
int main(){
myclass c;
c.setdata(2,3);
c.showdata();
return 0;
}