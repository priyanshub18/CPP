#include<iostream>
#include<queue>
                    
using namespace std;
void display(queue<int> q){
    int n = q.size();

    for(int i = 1 ; i<= n ; i++){
        q.push(q.front());
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}  
            
int main(){
    queue<int> q;
    q.push(10);
    q.push(50);
    q.push(70);
    q.push(90);
    q.push(60);
    q.push(88);
    q.push(56);
    q.push(99);
    q.push(87);

    int count = 0;
    int n  = q.size();
    for(int i = 0 ; i < n ; i++){
        int x  = q.front();
        q.pop();
        if(count & 1) q.push(x);

        count++;
    }

    display(q);
    return 0;
}