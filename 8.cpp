#include<iostream>
using namespace std;
class wall{
    private:
    int length;
    int height;
    public:
    wall(int len,int hgt){
        length=len;
        height=hgt;

    }
    wall(wall &obj){
        length=obj.length;
        height=obj.height;
    }
    double calculatearea(){
        return length*height;
    }
};
int main(){
    wall wall1(2,3);
    wall wall2=wall1;
    cout<<"area of wall1"<<wall1.calculatearea()<<endl;
    cout<<"area of wall2"<<wall2.calculatearea();
    return 0;
}
