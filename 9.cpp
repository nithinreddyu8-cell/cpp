#include<iostream>
using namespace std;
class student{
    public:
    char name[50];
    student();
    void display();

};
student::student(){
    cout<<"enter name:";
    cin>>name;
}
void student::display(){
    cout<<"the name of student is:"<<name<<endl;
}
int main(){
student s;
s.display();
return 0;
}