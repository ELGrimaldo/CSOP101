#include <iostream>
using namespace std;
/*
Prelim Act 1
Submitted by: James Leo C. Grimaldo
Date: 09/10/21

Instructions:
Create a simple C++ program that will allow the user to input a number. 
The program must determine if the input number is less than or equal to 100. 
If input number is greater than 100, display "JOLINA", otherwise, display "KIKO".

*/

int main(){
    int num;

    cout<< "Input a number: ";
    cin>> num;

    if(num > 100)
        cout<< "JOLINA";
        
    else
        cout<< "KIKO";

    return 0;
}