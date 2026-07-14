#include<iostream>
 using namespace std;
 class details{
    public:
    string name;
    int age;
 
 details(string n,int a){
 name=n;
 age=a;
}
};
int main()
{
    details s("nithin",18);
    cout<<"name:"<<s.name<<endl;
     cout<<"age:"<<s.age<<endl;
    return 0;
}