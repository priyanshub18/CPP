#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>

using namespace std;


double getMedian(priority_queue<int> &left , priority_queue<int , vector<int> , greater<int > > &right, int x , int y){
    int totalSize = x + y;
    if(totalSize % 2 != 0){
        return right.top();
    }
    else{
        return  (left.top()+right.top())/2.0;
    }
}
bool isBalanced( int x, int y){
    return (x == y) or (x + 1 == y);
}


vector<double> sliding_median(vector<int>& arr , int n , int k){
    priority_queue<int> left ;
    priority_queue<int , vector<int> , greater<int > > right;
    unordered_map<int , int> mp;
    int x = 0 , y = 0;

    right.push(arr[0]);
    y++;
    for(int i = 1 ; i < k ; i++){
        int curr = arr[i];
        int med = getMedian(left , right,x,y);
        if(curr < med){
            //go left
            left.push(curr);
            x++;
            if(!isBalanced(x, y)){
                int toBeRemoved = left.top();
                left.pop();
                right.push(toBeRemoved);
                x--; y++;
            }
        }else{
            right.push(curr);
            y++;
            if(!isBalanced( x, y)){
                int toBeRemoved = right.top();
                right.pop();
                left.push(toBeRemoved);
                x-- ; y++;
            }
        }
    }
    double m = getMedian(left, right , x, y);
    vector<double> result ;
    result.push_back(m);
    for(int i = k ; i < n ;i++){
        int newElementidx = i;
        int oldElementTobeDeleted = i - k;
        double med = getMedian(left , right , x , y);
        if(arr[newElementidx] > med){
            //go right
            right.push(arr[newElementidx]);
            y++;
            if(!isBalanced(x, y)){
                int toBeRemoved = left.top();
                left.pop();
                right.push(toBeRemoved);
                x--; y++;
            }
        }
        else{
            //go left
            left.push(arr[newElementidx]);
            x++;
            if(!isBalanced( x, y)){
                int toBeRemoved = right.top();
                right.pop();
                left.push(toBeRemoved);
                x-- ; y++;
            }

        }
        mp[arr[oldElementTobeDeleted]] = oldElementTobeDeleted;
        while(mp[left.top()]) {
            mp.erase(left.top());
            left.pop();
            x--;
            if(!isBalanced( x, y)){
                int toBeRemoved = right.top();
                right.pop();
                left.push(toBeRemoved);
                x-- ; y++;
            }

        }
        while(mp[right.top()]){
            mp.erase(right.top());
            right.pop();
            y--;
            if(!isBalanced(x, y)){
                int toBeRemoved = left.top();
                left.pop();
                right.push(toBeRemoved);
                x--; y++;
            }
        }
        result.push_back(getMedian(left , right , x ,y));
    }

    return result;
}
int main(){
    vector<int> v = {2 ,4 ,6 ,8, 3, 1 ,8 ,3 , 2};
   int  n = 9;  
   int k = 3;
   vector<double> c =  sliding_median(v, n , k);
   for(int i = 0 ; i < c.size() ; i++){
    cout<<c[i] <<" ";
   }
    return 0;
}