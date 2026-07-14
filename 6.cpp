#include<iostream>
using namespace std;
class student{
public:    
    string name,address;
    int age;

student(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter address:";
    cin>>address;
    cout<<"enter age:";
    cin>>age;
}

void display(){
    cout<<"student name is "<< name <<" and age is "<< age <<" belongs to "<< address <<endl;
}
};
int main()
{
    student s;
    s.display();
    return 0;
}
