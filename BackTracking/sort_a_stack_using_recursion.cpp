// #include<bits/stdc++.h>
// #include<vector>
                    
// using namespace std;
// void insert_the_num(stack<int>& s , int num){
//     if(s.size() == 0 or s.top()== num){
//         s.push(num);
//         return;
//     }
//     vector<int> v;
//     while(s.top() > num ){
//         v.push_back(s.top());
//         s.pop();
//     }
//     s.push(num);
//     for(int i = 0 ; i < v.size(); i++){
//         s.push(v[i]);
//     }
// }
// void sort_a_stack(stack<int>& s){
//     if(s.size() == 0) return;


//     int num = s.top();
//     s.pop();
//     sort_a_stack(s);
//     insert_the_num(s, num);

//     return;
// }                  
// int main(){
//     stack<int> s;
//     s.push(5);
//     s.push(1);
//     s.push(0);
//     s.push(2);

//     sort_a_stack(s);
//     while(s.empty()){
//         cout<<s.top()<<" ";
//         s.pop();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &s, int element){
    if(s.empty() || element > s.top()){
        s.push(element);
    }
    else{
        int top_element = s.top();
        s.pop();
        sortedInsert(s, element);
        s.push(top_element);
    }
}
void sortStack(stack<int> &s){
    if(!s.empty()){
        int top_data = s.top();
        s.pop();
        sortStack(s);
        sortedInsert(s, top_data);
    }
}

int main(){
    // input stack 
    stack<int> s;
    
    // pushing elements into the stack
    s.push(1);
    s.push(5);
    s.push(-2);
    s.push(17);
    s.push(11);

    // function to sort the stack 
    sortStack(s);

    // print stack

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}