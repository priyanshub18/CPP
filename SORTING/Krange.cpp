#include<iostream>

#include<algorithm>
float max(float a, float b){
    if(a>=b) return a;
    return b;
}
float min(float a, float b){
    if(a < b) return a;
    return b;
}

using namespace std;

int main(){
    int arr[] = {5 ,3 ,6};
    int n = sizeof(arr)/ 4;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    float Kmin = (float)INT_MIN;
    float Kmax = (float)INT_MAX;
    bool flag = true;
    for (int i = 0; i < n- 1; i++)
    {
        if(arr[i] >= arr[i+1]){
            Kmin = max(Kmin, (arr[i] + arr[i+1])/2.0);
        }
        else 
            Kmax = min(Kmax, (arr[i] + arr[i+1])/2.0);

        if(Kmax < Kmin)
            flag = false;
            break;
    }

    if(!flag) cout<<-1;
    else {
        cout<<"range is from "<<Kmin<<" "<<Kmax;
    }

}