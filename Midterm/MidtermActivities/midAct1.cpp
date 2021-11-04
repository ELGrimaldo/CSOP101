/*
Midterm Act 1
Submitted by: James Leo C. Grimaldo
Date: 09/27/21

Instructions:
Using array, loops, and conditional statement, create a program that will perform the following:

    1. Store 5 grades in an array.
    2. Determine if the input grade is passed or failed.
    3. Count how many grades are passed or failed.
*/

#include <iostream>
using namespace std;

int main(){
    
    //Store 5 grades in an array.
    int grades[5]; //Array
    int pointer = 0;

    //loop
    while(pointer <= 4){
        cout<< "Input your grade: ";
        cin>> grades[pointer];
        pointer++;
    }
    cout<<endl;

    //Count how many grades are passed or failed.
    int failCounter = 0;
    int passCounter = 0;
    pointer = 0; //pointer will be reset to zero since it's another iteration.
    
    //loop
    for( pointer = 0; pointer<= 4; pointer++){

        //Determine if the input grade is passed or failed.
        //Conditional Statement:
        if (grades[pointer] <= 75){
            cout<< grades[pointer] << " | Failed" << endl;
            failCounter++;
        } else if (grades[pointer] <= 100){
            cout<< grades[pointer] << " | Passed" << endl;
            passCounter++;
        }
    }
    cout<<endl;

    cout<< "Failed Subjects: " << failCounter <<endl;
    cout<< "Passed Subjects: " << passCounter;
     
}