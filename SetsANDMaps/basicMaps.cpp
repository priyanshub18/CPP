#include<iostream>
#include<unordered_map>
                    
using namespace std;
                        
int main(){
    unordered_map<string, int> m;
    pair<string , int> p1;
    p1.first = "priyanshu";
    p1.second = 67;
    m.insert(p1);
    pair<string , int> p2;
    p2.first = "ramram";
    p2.second = 99;
    m.insert(p2);

    pair<string , int> p3;
    p3.first = "okay";
    p3.second = 66;

    m.insert(p3);


    m["key"] = 34;


    for(pair<string , int> ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;

    }
    


    return 0;
}