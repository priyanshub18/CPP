#include<iostream>
#include<vector>
                    
using namespace std;
class hero{
    private:
        string name;
        int age;
        int height;
    public:
    hero(string name , int age , int height){
        this->name = name;
        this->age = age;
        this->height = height;
    }
    int getAge(){
        return this->age;
    }
    string getName(){
        return this->name;
    }
};                    
int main(){
    hero* a = new hero("ram", 32 , 154);
    
    cout<<a->getAge();
    return 0;
}