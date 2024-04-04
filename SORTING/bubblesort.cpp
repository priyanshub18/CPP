#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(6);

    for(int i = 0  ; i < v.size() ; i++){
        cin>>v[i];
    }

    //bubble sort 
    for(int i = 0 ; i < v.size() - 1 ; i++){//n-1 passes 
        for (int  j = 0; j < v.size() - i - 1 ; j++)
        {
            if(v[j] > v[j+1] ) swap(v[j] ,v[j+1]);
        }
    }




    // optimised bubble sort 
    for(int i = 0 ; i < v.size() - 1 ; i++){//n-1 passes 
        bool swapr = true; 
        for (int  j = 0; j < v.size() - i - 1 ; j++)
        {
            if(v[j] > v[j+1] ){ 
                swap(v[j] ,v[j+1]);
                swapr  = false;
        }}

            if(swapr) break;
        


        

    }
    
    
    
     for(int i = 0  ; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }








}