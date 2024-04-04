#include<iostream>
#include<queue>
                    
using namespace std;
                        
int main(){
    priority_queue<int> dpq;
    priority_queue<int , vector<int>, greater<int> > pq; 
    pq.push(10);
    pq.push(1);
    pq.push(9);
    pq.push(90);
    pq.push(070);
    pq.push(44);
    pq.push(23);


    cout<<pq.top();

    
    return 0;
}