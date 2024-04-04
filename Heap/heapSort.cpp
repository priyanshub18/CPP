#include<iostream>
#include<vector>
                    
using namespace std;
class MaxHeap{
    public:
    vector<int> hp;
    int i; //[0-i] is maxheap

    MaxHeap(vector<int>& v){
        //0(n) hai is baar time complexity
        hp = v;
        int n = hp.size();
        i = n;
        for(int j = hp.size()/2 ; j >=0 ; j--){
            downheapify(j, i);
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

    void downheapify(int idx, int bound){
        while(idx < hp.size()){
            int lc = 2 * idx +1 ;
            int rc = 2 * idx + 2 ;
            if(lc >= bound) break;
            int maxEL = idx ;
            if(hp[lc] > hp[maxEL]) maxEL = lc;
            if(rc < bound and hp[rc] > hp[maxEL]) maxEL = rc;

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
        i--;
        if(!empty()){
            downheapify(0,i);
        }
    }
    int peek(){
        if(empty()) return INT_MIN;
        return hp[0];
    }

    void display(){
        cout<<"[";
        for(int j = 0 ; j < i ; j++){
            cout<<hp[j]<<" ";
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
            downheapify(0,i);
        }
    }

    vector<int> heapsort(){
        int sz = hp.size();

        while(sz > 0){
            int ele = 0;
            swap(hp[ele] , hp[i]);
            i--;
            sz--;
            downheapify(0 , i);

        }
        return hp;
    }
      
    
};  
void heapSort(vector<int> &v){
    MaxHeap h(v);
    v = h.heapsort();
    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i]<<" ";
    }



}                     
int main(){
    int  n = 9 ;
    vector<int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    heapSort(v);






    return 0;
}