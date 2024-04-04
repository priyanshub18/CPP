#include<iostream>
#include<stack>
                    
using namespace std;
vector<int> prevLargerElement(vector<int> arr, int n){
        stack<int> st;
        vector<int > ans(n);
        

       
        ans[0] = -1;
        st.push(arr[0]);
        
        for(int i = 1 ; i < n ; i++){
            while(st.size() > 0 && st.top() <= arr[i] ) st.pop();
            if(st.size() == 0) ans[i] = -1;
            else ans[i] = st.top();


            st.push(arr[i]);
        }
        
        
        return ans;
    }                     
int main(){
    //int arr[]= { 3,1,2,7,4,6,2,3};
    vector<int > arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(7);
    arr.push_back(4);
    arr.push_back(6);
    arr.push_back(2);
    arr.push_back(3);
    int  n = arr.size();


    vector<int> brr = prevLargerElement(arr , n);

    for(int i = 0 ; i  < n ; i++){
        cout<<brr[i]<<" ";
    }

    return 0;
}