#include<iostream>
using namespace std;
bool isPalindrome(string str  , int i , int j ){
   if(i > j) return true;
   if(str[i] != str[j]) return false;
   else return isPalindrome(str , ++i , --j);
}

int main(){
    string str = "racecar";
    cout<<isPalindrome(str , 0 , str.size()-1) ;
}