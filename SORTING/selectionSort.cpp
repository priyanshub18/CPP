#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(6);

    for(int i = 0  ; i < v.size() ; i++){
        cin>>v[i];
    }

    // selection sort //unstabke hunda si
    int n = v.size();

    for(int i = 0 ; i < n-1  ; i++){
        int minn = INT_MAX;
        int mindx = 0;
        for(int j = i ; j < n ; j++){
            if(minn > v[j]){
                minn = v[j];
                mindx = j;
            }
        }

        swap(v[mindx] ,v[i] );
    }





        for(int i = 0 ; i < n ; i++){
            cout<<v[i]<<" ";
        }


    
    
    
    
    
    
    
    }