#include<iostream>
#include<vector>
                 
using namespace std;
int meetingRoom(vector<vector<int> >& timings){
    vector<int> start;
    vector<int> end;

    for(int i = 0 ; i < timings.size() ; i++){
        start.push_back(timings[i][0]);
        end.push_back(timings[i][1]);
    }
    sort(start.begin() , start.end());
    sort(end.begin() , end.end());

    int i = 0 , j = 0 ;
    int room = 0;
    int maxRoom = 0;
    while(i < start.size() && j < end.size()){
        if(start[i] < end[j]){
            room++;
            i++;
            maxRoom = max(room , maxRoom);
        }
        else if(start[i] > end[j]){
            room--;
            j++;
        }
        else{
            i++;
            j++;
        }

        
    }

    return maxRoom;
}                       
int main(){
    vector<vector<int> > timings  = {{0,30} , {5,10} , {15,20}};
    cout << meetingRoom(timings);
    return 0;
}