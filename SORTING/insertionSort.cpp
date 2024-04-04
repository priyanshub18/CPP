#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(6);

    for(int i = 0  ; i < v.size() ; i++){
        cin>>v[i];
    }

    int n = v.size();
    // for(int i = 1 ; i  < n ; i++){
    //     int j = i ;
    //     while(j >=1){
    //         if(v[j] >= v[j-1]) break ;
    //         else{  
    //              swap(v[j] , v[j-1]);
    //              j--;

    //         }
    //         }
    //     }

        for(int i = 1 ; i  < n ; i++){
        int j = i ;
        while(v[j] < v[j-1] && j >= 1){
            
           
                 swap(v[j] , v[j-1]);
                 j--;

       
            }
        }
    



    for( int ele : v){
        cout<<ele<<" ";
    }

    
}
