#include<iostream>
#include<vector>
                    
using namespace std;
class hero{
    //properties 
    string ramram;
    public:
    int health;
    int temp;

    hero(string ramram){
        this-> ramram = ramram;
    }

    string getramram(){
        return ramram;
    }
    void setramram(char r){
        ramram = r;
    }
   
}
;
                        
int main(){
    hero h1("ram");

    // h1.ramram = 't';

    cout<<h1.getramram();
    // cout<<h1.health;
    
    return 0;
}