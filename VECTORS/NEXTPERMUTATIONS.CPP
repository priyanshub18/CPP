#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();

        for(int i = n-2 ; i >= 0 ; i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
            
        }
        if(idx == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
       
            for(int i  = n-1 ; i>= idx ; i--){
                if(nums[idx]  < nums[i]   ) {
                    swap(nums[idx], nums[i]);
                break;
                }
    

            reverse(nums.begin()+idx+1 , nums.end());
            return ;
            }}
int main(){

    vector<int> a ;
    a.push_back(3);
    a.push_back(4);
    a.push_back(2);
    a.push_back(1);


 next_permutation(a.begin() , a.end());



    //nextPermutation(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    

}

