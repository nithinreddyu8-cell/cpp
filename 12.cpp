#include<iostream>
#include<string>
using namespace std;
int main()
{
    string password;
    try{
        cout<<"enter password:";
        cin>>password;
        if(password.length()<8){
            throw "error:password must contain atleast 8 characters";
        }
        cout<<"password accepted successfully"<<endl;
    }
    catch(const char*msg){

        cout<<msg<<endl;
    }
    return 0;
}