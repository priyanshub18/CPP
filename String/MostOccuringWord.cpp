#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>


using namespace std;

int main(){
    string s ;
    getline(cin , s);

    stringstream ss(s);
    string temp;
    vector<string> v;

    while( ss>> temp){
        v.push_back(temp);

    }
    // for(int i = 0 )
    sort(v.begin() , v.end());
    int count = 1 ;
    int maxcount = 1;
    //after sorting same words ek sath aajaenge to easy h krna ab to 
    for(int i = 1 ; i < v.size() ; i++ ){
        if(v[i-1] == v[i]) count++;
        else count = 1;

        if(count > maxcount) maxcount = count; 
    }
    count = 1;
    for(int i = 1 ; i < v.size() ; i++ ){
        if(v[i-1] == v[i]) count++;
        else count = 1;

        if(count == maxcount) cout<<v[i]<<" "<<maxcount; 
    }

    // cout<<maxcount;

}
