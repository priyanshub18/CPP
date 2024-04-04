#include<iostream>
#include<vector>
  //operator overloading                  
using namespace std;
class A{
    public:
    int a ;
    int b ;
    public:
    void operator+ (A &obj){
        int val1 = this->a;
        int val2 = obj.a;
        cout<<val2 - val1;
    }
};                        
int main(){
    A obj1 , obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    return 0;
}