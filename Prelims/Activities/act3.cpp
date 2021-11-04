#include <iostream>
using namespace std;
/*
Activity Name: Prelim Activity 2
Submitted by: James Leo C. Grimaldo
Date: 09/10/21

Instructions: 
Using nested selection statement, create a C++ program that will be able to perform the given algorithm.

1. Prompt the user to input year level and number of units to enroll.
2. If year level is between 1-4, assign the amount per unit to each year level, otherwise, 
    prompt an invalidity message.
3. Compute and display for the tuition fee amount using the formula: 
    number of units to enroll x amount per unit.
*/



int main(){
    int yearLevel, numOfUnits, amtPerUnit;



    cout<< "Input year level: ";
    cin>> yearLevel;
    

    if(yearLevel >= 1 && yearLevel <= 4){
        
        cout<< "Input number of Units: ";
        cin>> numOfUnits;
        
        if(yearLevel == 1){
            cout<< "Tuition Fee: " << numOfUnits * 800;
        }else if (yearLevel == 2){
            cout<< "Tuition Fee: " << numOfUnits * 1800;
        }else if(yearLevel == 3){
            cout<< "Tuition Fee: " << numOfUnits * 2800;
        }else{
            cout<< "Tuition Fee: " << numOfUnits * 3800;
        }

    }else{
        cout<< "Invalid Value! Year Level must be 1 to 4";
    }

    return 0;
};
