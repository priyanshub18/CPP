#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(6);

    for(int i = 0  ; i < v.size() ; i++){
        cin>>v[i];
    }
    int n = v.size();

    vector<int> a;

    for (int i = 0; i < n; i++) {a.push_back(v[i]);}

    sort(a.begin(),a.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == v[j])
            {
                v[j] = i;
            }
            
        }
        
    }
    
    



    
    
    



    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
     }


    
    
    
    
    }