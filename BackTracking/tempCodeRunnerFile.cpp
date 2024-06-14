 vector<int> v;
    while(s.top() > num ){
        v.push_back(s.top());
        s.pop();
    }
    s.push(num);
    for(int i = 0 ; i < v.size(); i++){
        s.push(v[i]);
    }
}
void sort_a_stack(stack<int>& s){
    if(s.size() == 1) return;


    int num = s.top();
    s.pop();