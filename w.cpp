#include<iostream>
using namespace std;
class employee{
    private:
    int Age;
    public:
    void getage(){
   cout<<"enter age:";
   cin>>Age;
    }
   void setAge(){
        if (Age>=18)
        cout<<"he/she is eligible for job";
        else
        cout<<"he/she is not eligible for job";
   }
};
    int main(){
    employee e;
    e.getage();
    e.setAge();
    return 0;


}