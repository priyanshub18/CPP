#include<bits/stdc++.h>
#include<vector>
                    
using namespace std;
class LRUCache {
public:

    class node{
        public:
            int val;
            int key;
            node* next;
            node* prev;

            node(int _key, int _val){
                key = _key;
                val = _val;
            }
    };


        node* head = new node(-1,-1);
        node* tail = new node(-1,-1);

        unordered_map<int,node*>mp;
        int cap;

    LRUCache(int capacity) {
        cap = capacity;
        head->next=tail;
        tail->prev=head;
    }

    void addnode(node* newnode){
        node* temp = head->next;

        newnode->next= temp;
        temp->prev=newnode;

        head->next=newnode;
        newnode->prev=head;
    }

    void deletenode(node* delnode){
        node* delprev = delnode->prev;
        node* delnext = delnode->next;

        delprev->next=delnext;
        delnext->prev=delprev;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            node * resnode = mp[key];
            int ans = resnode->val;
            mp.erase(key);
            deletenode(resnode);
            addnode(resnode);
            mp[key]=head->next;

            return ans;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            node * existingnode = mp[key];
            deletenode(existingnode);
            mp.erase(key);
        }
        if(mp.size()==cap){
            mp.erase(tail->prev->key);
            deletenode(tail->prev);
        }
        addnode(new node(key,value));
        mp[key]=head->next;
    }
};            
int main(){
    
    return 0;
}