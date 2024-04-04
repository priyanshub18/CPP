#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector< vector<int> > v;

    vector<int> v1(2,3);
    vector<int> v2(3,1);
    vector<int> v3(4,5);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);


   cout<<v[0][0];
    




    
    
    
    }