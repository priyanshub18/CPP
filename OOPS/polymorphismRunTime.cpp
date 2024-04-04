#include<iostream>
#include<vector>
                 
using namespace std;
class animal{
    public:
    int a ;
    int b ;

    void speaking(){
        cout<<"BOl to rha hu mc"<<endl;
    }
}; 

class dog :public animal{
    public:
    void speaking(){
        cout<<"i am barking not speaking";
    }
};
int main(){
    animal a;
    a.speaking();
    dog d;
    d.speaking();
    return 0;
}