#include<iostream>
using namespace std;

int maze(int sr,int sc ,int er ,int ec ){
    if(sr > er || sc > ec) return 0;
    if(sr == er && sc == ec) return 1;
    int rightways =  maze(sr+1,sc,er,ec);
    int downways = maze(sr,sc+1,er,ec);
    return rightways + downways;
}
void printPath(int sr,int sc ,int er ,int ec, string s){
    if(sr > er || sc > ec) return ;
    if(sr == er && sc == ec) {
        cout<<s<<endl;
        return;
    };
    printPath(sr+1,sc,er,ec, s+'R');
    printPath(sr,sc+1,er,ec,s+'D');

}
int main(){
    string s;
   printPath(1,1,4,4,s);



}