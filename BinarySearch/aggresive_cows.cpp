#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
bool canWePlace(vector<int>& arr , int dist , int cows){
    int cntCows = 1 ; 
    int last = arr[0];
    for(int i = 0 ; i < arr.size() ; i++){
        if(arr[i] - last >= dist){
            cntCows++;
            last = arr[i];
        }

        if(cntCows == cows) return true;
    }
    return false;
}     
int BS(vector<int>& arr , int dist){
    int lo = 0;
   
    int hi = arr[arr.size()-1] - arr[0];
   
    int ans = 0;
    while(lo <= hi){
        int mid  = lo + ( hi - lo)/2;


        if(canWePlace(arr, dist , mid)){
            ans = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    return ans;
}       
int main(){
    vector<int> v {0 ,3 ,4 ,7 ,9 ,10};
    //sort the array if not sorted
    cout<<BS(v , 4);
        
    return 0;
}