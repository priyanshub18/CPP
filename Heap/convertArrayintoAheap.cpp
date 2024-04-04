#include<iostream>
#include<vector>
                    
using namespace std;
class MaxHeap{
    public:
    vector<int> hp;

    MaxHeap(vector<int>& v){
        hp = v;
        for(int i = 1 ; i < hp.size() ; i++){
            upheapify(i);
        }
    }
    
    void  upheapify(int ci){
        while(ci > 0){
            int pi = (ci-1)/2;
            if(hp[pi] < hp[ci]){
                swap(hp[pi] , hp[ci]);
                ci = pi;
            }else {
                break;
            }
        }
    }

    void downheapify(int idx){
        while(idx < hp.size()){
            int lc = 2 * idx +1 ;
            int rc = 2 * idx + 2 ;
            if(lc >= hp.size()) break;
            int maxEL = idx ;
            if(hp[lc] > hp[maxEL]) maxEL = lc;
            if(rc < hp.size() and hp[rc] > hp[maxEL]) maxEL = rc;

            if(maxEL != idx){
                swap(hp[maxEL] , hp[idx]);
                idx = maxEL;

            }else{
                break;
            }
        }
    }

    bool empty(){
        return hp.size()==0;
    }
    void push(int element){
        hp.push_back(element);
        upheapify(hp.size()-1);
    }

    void pop(){
        //removes the highest root element
        if(empty()) return ;
        swap(hp[0] , hp[hp.size()-1]);
        hp.pop_back();
        if(!empty()){
            downheapify(0);
        }
    }
    int peek(){
        if(empty()) return INT_MIN;
        return hp[0];
    }

    void display(){
        cout<<"[";
        for(int i = 0 ; i < hp.size() ; i++){
            cout<<hp[i]<<" ";
        }
        cout<<"]"<<endl;
    }


    

    int size(){
        return hp.size();
    }
    

    void deleteAtIndex(int idx){
        hp[idx] = INT_MAX;

        upheapify(idx);
       if(empty()) return ;
        swap(hp[0] , hp[hp.size()-1]);
        hp.pop_back();
        if(!empty()){
            downheapify(0);
        }
    }
      
    
};                       
int main(){
    int  n = 9 ;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }


    MaxHeap hp(v);


    hp.display();





    return 0;
}