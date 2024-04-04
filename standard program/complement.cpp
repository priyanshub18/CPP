 #include<iostream>
 using namespace std;
 int main(){
    int n ;
     cin>>n;
    int binary;
        int i = 0;
        while(n != 0){
            int digit = n%2;
            binary += (digit *pow(2,i));
            n/=2;
            i++;

        }
    //binary numbe mil gya;
    int number= 0;
     i = 0;

    while(binary != 0){
        int digit = binary%10;
        if( digit == 1){
            digit = 0;
        }
        else{
            digit = 1;
        }
        number+= (digit*pow(10,i));
        i++;
        binary/=2;
    }   
    cout<<number;
    }