//just the application of previous greater element#include<iostream>
#include<iostream>
#include<stack>
                    
using namespace std;
vector<int> prevLargerElement(vector<int> arr, int n){
        stack<int> st;
        vector<int > ans(n);
        

       
        ans[0] = 1;
        st.push(0);
        
        for(int i = 1 ; i < n ; i++){
            while(st.size() > 0 && arr[st.top()] <= arr[i] ) st.pop();
            if(st.size() == 0) ans[i] = -1;
            else ans[i] = st.top();
            ans[i] = i - ans[i];


            st.push(i);
        }
        
        
        
        return ans;
    }                     
int main(){
    //int arr[]= { 3,1,2,7,4,6,2,3};
    vector<int > arr;
    arr.push_back(100);
    arr.push_back(80);
    arr.push_back(60);
    arr.push_back(81);
    arr.push_back(70);
    arr.push_back(60);
    arr.push_back(75);
    arr.push_back(85);
    int  n = arr.size();


    vector<int> brr = prevLargerElement(arr , n);

    for(int i = 0 ; i  < n ; i++){
        cout<<brr[i]<<" ";
    }

    return 0;
}
