#include<iostream>
using namespace std;
class animal{
    public:
    virtual void show(){
    cout<<"animal sound"<<endl;
}
};
class dog:public animal{
    public:
    void show(){
        cout<<"lion roars"<<endl;
    }
};
int main(){
    animal*ptr;
    dog d;
    ptr=&d;
    ptr->show();
    return 0;
}