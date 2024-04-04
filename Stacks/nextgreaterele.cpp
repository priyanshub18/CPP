#include<iostream>
#include<stack>
                    
using namespace std;
vector<int> nextLargerElement(vector<int> arr, int n){
        stack<int> st;
        vector<int > ans(n);
        

       
        ans[n-1] = 0;
        st.push(arr[n-1]);
        
        for(int i = n-2 ; i >= 0 ; i--){
            while(st.size() > 0 && arr[st.top()] <= arr[i] ) st.pop();
            if(st.size() == 0) ans[i] = -1;
            else ans[i] = st.top();
           // ans[i] = i - ans[i];

            st.push(arr[i]);
        }
        
        
        return ans;
    }                     
int main(){
    //int arr[]= { 3,1,2,7,4,6,2,3};
    vector<int > arr;
    arr.push_back(73);
    arr.push_back(74);
    arr.push_back(75);
    arr.push_back(71);
    arr.push_back(69);
    arr.push_back(72);
    arr.push_back(76);
    arr.push_back(73);
    int  n = arr.size();


    vector<int> brr = nextLargerElement(arr , n);

    for(int i = 0 ; i  < n ; i++){
        cout<<brr[i]<<" ";
    }

    return 0;
}