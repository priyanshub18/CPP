#include<iostream>
#include<set>
#include<map>
                    
using namespace std;
                        
int main(){
    // set<int> s;
    // s.insert(2);
    // s.insert(7);
    // s.insert(0);
    // s.insert(8);

    // for(auto ele : s){
    //     cout<<ele<<" ";
    // }

    map<int , int> m;
    m[1]=  2;
    m[7]=  20;
    m[19]=  29;
    m[10]=  288;

   

    for(auto ele : m){
        cout<<ele.first<<" "<<ele.second<<endl;
    }
    return 0;
}