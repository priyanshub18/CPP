#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
#include <bits/stdc++.h>
class Solution {
public:
bool checkPossible(string &s1,string &s2)
{
        if(s1.size()!=s2.size()+1)  return false;  
        int first=0;
        int second=0;
        while(first<s1.size())
        {
            if(s1[first]==s2[second] && second<s2.size())
            {
                first++;
                second++;
            }
            else{
                first++;
            }
        }
        if(first==s1.size() && second==s2.size())
        {
            return true;
        }
        return false;
    }
    //custom comparator is good
    static bool compare(string &s1,string &s2)
    {
        return s1.size()<s2.size();
    }
    int longestStrChain(vector<string>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end(),compare);
        vector<int>dp(n,1);
        int maxi=1;
        for(int i=0;i<n;i++)
        {
            for(int prev=0;prev<i;prev++)
            {
                if(checkPossible(arr[i],arr[prev]) && 1+dp[prev]>dp[i])
                {
                    dp[i]=1+dp[prev];
                }
            }
            if(dp[i]>maxi)
            {
                maxi=dp[i];
            }
        }
        return maxi;
    }
};                       
int main(){
    
    return 0;
}