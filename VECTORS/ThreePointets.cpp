#include<iostream>
#include<vector>


using namespace std;


void swap(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;
}
void sortColors(vector<int>& arr) {
        int n = arr.size();
        
        int i = 0 , j = 0 , k = n -1; 

        while(j <= k){

            if(arr[j] == 0) {
                swap(arr[i], arr[j]);
                i++ ;
                j++;
            }

            else if(arr[j] == 2){
                swap(arr[j], arr[k]);
                k--;
            }

           else if(arr[j] == 1){
                j++;
            }
        }
    


    
    }

    int main(){



        
    }