#include<iostream>
#include<queue>
                    
using namespace std;
                        
int main(){
    int arr[] = {3 ,-4,-7,30,-9,2,1,6,-1};
    int k = 3;
    int n = sizeof(arr)/4;

    queue<int> q;
    vector<int> ans;
    for(int i = 0 ; i < n ;i++){
        if(arr[i] < 0 ) q.push(i);
    }
    int i = 0 ;
    while(i+k <= n){
        while(q.size() > 0 && q.front() <  i ) q.pop();
        if(q.size()==0 || q.front() >= i+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;

    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    



    

    return 0;
}