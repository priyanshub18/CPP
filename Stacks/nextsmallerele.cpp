#include<iostream>
#include<stack>
                    
using namespace std;
                        
int main(){
    int arr[] = {2,1,5,6,2,3};
    int n = sizeof(arr)/4;
    int ans[n] ; 
    stack<int> st;

    ans[n-1] = -1;

    st.push(arr[n-1]);
    for(int i = n-2 ; i >= 0 ; i--){
    while(st.size() > 0 && st.top() >= arr[i]) st.pop();
    if(st.size() == 0) ans[i] = -1;
    else ans[i] = st.top();

    st.push(arr[i]);
    }


    for(int ele : ans){
        cout<<ele<<" ";
    }


    return 0;
}