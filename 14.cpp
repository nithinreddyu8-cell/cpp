#include<iostream>
using namespace std;
class employee{
    private:
    int Age;
    string Name,program_known;
    public:
    void setage(int age){
        if (age<=18)
        Age=age;
    
    }
    int getage(){
        return Age;
    }
    void setname(string name){
        Name=name;
    }
    string getname(){
        return Name;
    }
    void setpk(string pk){
         program_known=pk;
        
    }
    string getpk(){
        return program_known;
    }
   
};
    int main(){
    employee e;
    e.setname("nithin");
    cout<<e.getname()<<endl;
    cin>>Name;
    e.setage(18);
    cout<<e.getage();
    e.setpk("c++");
    cout<<e.getpk();
    return 0;


}