#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v ; //dont mention size


    v.push_back(4);
    v.push_back(3);
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity();


    



    //with size
    vector<int> vec(3,6);


    //input

    vector<int> vec2;

    int  n ;
    cin>>n;

    for(int i = 0 ; i < n ; i++){

        int in ;
        cin>>in;
        vec2.push_back(in);
    }

    

    for(int i = 0 ; i < n ; i++){

       
        cout<<vec2[i]<<" ";
    }

    




}