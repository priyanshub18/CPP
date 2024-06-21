#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
long double minimiseMaxDistance(vector<int>& arr , int k){
    int n = arr.size();
    vector<int> howMany(n-1 , 0);
    for(int st = 1 ; st <= k ; st++){
        long double maxSection = 01;
        int idx = -1;
        for(int i = 0 ; i < arr.size(); i++){
            long double diff = (arr[i+1] - arr[i]);
            long double sectionLen = diff/(long double)(howMany[i]+1);
            if(sectionLen > maxSection){
                maxSection = sectionLen;
                idx = i;
            }

        }
        howMany[idx]++;
    }
    long double ans = -1;
    for(int i = 0 ; i < n-1; i++){
            long double diff = (arr[i+1] - arr[i]);
            long double sectionLen = diff/(long double)(howMany[i]+1);
            ans = max(ans , sectionLen);

        }

        return ans;
    
}   




#include <bits/stdc++.h>
using namespace std;

long double minimiseMaxDistance(vector<int> &arr, int k) {
    int n = arr.size(); //size of array.
    vector<int> howMany(n - 1, 0);
    priority_queue<pair<long double, int>> pq;

    //insert the first n-1 elements into pq
    //with respective distance values:
    for (int i = 0; i < n - 1; i++) {
        pq.push({arr[i + 1] - arr[i], i});
    }

    //Pick and place k gas stations:
    for (int gasStations = 1; gasStations <= k; gasStations++) {
        //Find the maximum section
        //and insert the gas station:
        auto tp = pq.top();
        pq.pop();
        int secInd = tp.second;

        //insert the current gas station:
        howMany[secInd]++;

        long double inidiff = arr[secInd + 1] - arr[secInd];
        long double newSecLen = inidiff / (long double)(howMany[secInd] + 1);
        pq.push({newSecLen, secInd});
    }

    return pq.top().first;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    long double ans = minimiseMaxDistance(arr, k);
    cout << "The answer is: " << ans << "\n";
    return 0;
}


     
int main(){
    
    return 0;
}