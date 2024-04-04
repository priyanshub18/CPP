#include<iostream>
#include<vector>
#include<algorithm>
                    
using namespace std;
int minProduct(vector<int> &v){
    int cn = 0, cz = 0, cp =0;
    int prod_pos = 1;
    int prod_neg = 1;
    int maxNega = INT_MIN;
    
    for(int ele : v){
        if(ele < 0){
            cn++;
            prod_neg *= ele;
            maxNega = max(maxNega , ele);


        }
        if(ele ==0) cz++;
        if(ele > 0) {
            cp++;
            prod_pos *= ele;
            }
    }


    if(cn == 0 ){
        if(cz > 0) return 0;
        else{
            auto it = min_element(v.begin() , v.end());
            return *it;
        }
    }else{
        if(cn % 2 == 0){
            //even 
            return (prod_neg/maxNega) *prod_pos;
        }else{
            return prod_neg * prod_pos;
        }
    }





}                        
int main(){
    vector<int> v = {-2, -3 , 1, 4, -2 , -5};
    cout<<minProduct(v);
    return 0;
}