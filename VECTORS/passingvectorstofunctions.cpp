#include<iostream>
#include<vector>


using namespace std;

void refer( vector<int> &vec2 ){//agr &vec2 lagao to pass bt reference vrna passs by value

    vec2[0] = 1;

    for (int i = 0; i < vec2.size(); i++)
    {
       cout<<vec2[i]<<" ";
    }
    
}


int main(){


    vector<int> vec(4,2);

    for (int i = 0; i < vec.size(); i++)
    {
       cout<<vec[i]<<" ";
    }

    cout<<"\n";
    refer(vec);
     cout<<"\n";

    for (int i = 0; i < vec.size(); i++)
    {
       cout<<vec[i]<<" ";
    }
}