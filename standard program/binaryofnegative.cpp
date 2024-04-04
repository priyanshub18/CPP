// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int remainder ;
//     int binary = 0 ,pf = 1;
//     if (n <0)
//     {
//         n = (-1)*n;
//      while(n != 0){
//         remainder = n%2;
//         binary+= (remainder*pf);
//         pf *=10;
//         n/= 2;

//      }
//        //decimal again conversion 
//         int ns = binary ;
//         {int remainder ;
//         int decimal = 0 ,pf = 1;
//         while(ns != 0){
//             remainder = ns%10;
//             decimal+= (remainder*pf);
//             pf *=2;
//             ns/= 10;}
        
//          //finding the ones complement
//         ns = ~(ns);

//         //twos complement ;

        
        


//     }}
    
//     else{
//          while(n != 0){
//         remainder = n%2;
//         binary+= (remainder*pf);
//         pf *=10;
//         n/= 2;
//     }

    
// }cout<<binary;
// }


#include <stdio.h>
using namespace std;

void decimalToBinary(int decimal, char binary[]) {
    int index = 0;

    if (decimal == 0) {
        binary[index++] = '0';
    } else {
        while (decimal > 0) {
            binary[index++] = (decimal % 2) + '0';
            decimal /= 2;
        }
    }

    // Null-terminate the binary string
    binary[index] = '\0';

    // Reverse the binary string
    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = binary[start];
        binary[start] = binary[end];
        binary[end] = temp;
        start++;
        end--;
    }
}

void findBinaryNegative(int decimal, char binary[]) {
    if (decimal < 0) {
        // Find binary representation of the positive equivalent
        decimalToBinary(-decimal, binary);

        // Invert all bits
        for (int i = 0; binary[i] != '\0'; i++) {
            binary[i] = (binary[i] == '0') ? '1' : '0';
        }

        // Add 1 to the inverted binary representation
        int carry = 1;
        for (int i = 0; binary[i] != '\0'; i++) {
            int bit = (binary[i] - '0') + carry;
            binary[i] = (bit % 2) + '0';
            carry = bit / 2;
        }
    } else {
        // If the number is non-negative, directly find its binary representation
        decimalToBinary(decimal, binary);
    }
}

int main() {
    int decimal;
    char binary[33]; // Assuming a 32-bit binary representation

    // Input: Decimal number
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // Find and print binary representation
    findBinaryNegative(decimal, binary);
    printf("Binary equivalent: %s\n", binary);

    return 0;
}
