#include<iostream>
#include<vector>
                    
using namespace std;
                        
int main(){
    int arr[] = {2,3,4,4,7,-1,4,-2,6};
    int n = sizeof(arr)/4;
    int k = 4 ; 
    int p = -1 ;
    for(int i = 0 ; i < k ; i++){
        if(arr[i] < 0 ){
            p = i;
            break;
        }
    }

    vector<int> ans;
    ans.push_back(arr[p]);
    int i = 1 ; 
    int j = k ;
    while(j < n){
        if(i <= p){
            ans.push_back(arr[p]);
        }
        else{
            for (p = i ; p <= j ; p++)
            {
               if(arr[p]< 0){
                ans.push_back(arr[p]);
                break;
               }
            }
           
            
        }
        i++;
        j++;
    }

    for (int  i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}