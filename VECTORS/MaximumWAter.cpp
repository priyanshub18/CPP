#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> height;
//height = [4,2,0,3,2,5]

    height.push_back(4);
    height.push_back(2);
    height.push_back(0);
    height.push_back(3);
    height.push_back(2);
    height.push_back(5);   

    vector<int> left ;
    vector<int> right;

    left.push_back(height[0]);
    for(int i = 1 ; i < height.size() ; i++){
          left.push_back(max(left[i-1],height[i]));
          

       }


//    for (int i = 0; i < left.size(); i++)
//    {
//         cout<<left[i]<<" ";
//    }
    // cout<<endl;
    int j = 0;
    right.push_back(height[height.size()-1]);
    for(int i = height.size()-2 ; i >= 0 ; i--){

          right.push_back(max(right[j++],height[i]));
          

       }

    reverse(right.begin() , right.end());

     int sum = 0;
    for (int i = 0; i < height.size(); i++)
    {
        sum+= (min(left[i], right[i]) - height[i]);
    }
    
       


cout<<sum;

}
