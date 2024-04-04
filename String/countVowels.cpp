#include<iostream>
#include<string>

using namespace std;

int main(){
        int n ;
        cin>>n;
        char str[n+1];
        for(int i = 0 ; i < n ; i++){
            cin>>str[i];
        }
        str[n] = '\0';
    int count =0 , i = 0 ;
        while(str[i] != 0){
            if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' ){
                count++;
                i++;
            }
        }
        cout<<count;

           
}