#include<iostream>
#include<vector>
#define ll long long int         
using namespace std;
//maybe this is wrong but i have to correct it in the revision 
bool cmp(int x , int y){
    return x > y;
}
ll minCost(int n , int m , vector<ll> &X,vector<ll> &Y){
    int vr = 1, hr = 1;
    int h , v = 0;
    ll ans = 0;
    sort(X.begin() , X.end(),cmp);
    sort(Y.begin() , Y.end(),cmp);
    while(h <= n-1 && v <= m-1){
        if(X[v] > Y[h]){
            ans += X[v]*vr;
            hr++;

            v++;
        }else{
            ans += Y[h]*hr;
            vr++;

            h++;
        }
    }

    while(h <= n -1){
        ans += Y[h]*hr;
            vr++;

            h++;
    }
    while(v <= m-1){
         ans += X[v]*vr;
            hr++;

            v++;
    }


    return ans;
} 



int main(){
    int n = 4 , m = 6;
    vector<ll> X = {2,1,3,1,4};
    vector<ll> Y = {4,1,2};

    cout<<minCost(n, m , X , Y);

    return 0;
}