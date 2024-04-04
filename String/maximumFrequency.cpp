#include<iostream>
#include<algorithm>
#include<string>


using namespace std;


int main(){
    string s;
    getline(cin , s);


    sort(s.begin() , s.end());

    int maxcount  = 0; 
    char maxOccur = '\0';
    
    int i = 0; 
    while(s[i] != '\0')
    {
        char occ = s[i];
        int count = 0;
      while(s[i] == occ ){
        count++;
        i++;

      }
       
        if( count > maxcount){
            maxcount = count;
            maxOccur = occ;
        }

        


    }
    

    cout<<maxOccur<<" "<<maxcount<<" ";
    

}