/*
Activity Name: Midterm Activity 2
Submitted by: James Leo C. Grimaldo
Date: 10/13/21

Instructions: 
Create a function oriented program that will store 5 numbers in an array and determine the highest and
lowest numbers. The program must have a function to store 5 numbers and a function to determine the 
highest and lowest number.

*/

#include <iostream>
using namespace std;

//function declaration.
void storeNums(); 
void findHighLow(int arr[]);

int main(){

    //calling function storeNums
    storeNums();
    return 0;
}

//Function that store and ask for value in an array.
void storeNums(){
    int numsArray[5]; //Array storage.
    int num; //teporary value storage before adding to array.

    int i;
    for(i = 0; i <= 4; i++){ //loop that ask user input to fill an array.
        
        cout<<"Enter a Number: ";
        cin>> num;
        numsArray[i] = num;

    }

    //calling findHighLow function in order to display highest and lowest number.
    findHighLow(numsArray);
}

//function that determine highest and lowest value in an array.
void findHighLow(int arr[]){
    int high = arr[0]; //store the highest value.
    int low = arr[0];  //store the lowest value.
    
    int i;
    for (i = 0; i <= 4; i++){ //loop that tracks the highest and lowest using two if statements.
        if (arr[i] > high)
            high = arr[i];
        if (arr[i] < low)
            low = arr[i];
    }

    //display highest and lowest value in an array.
    cout<<"\nHighest Number: "<< high<< endl;
    cout<<"Lowest Number:  "<< low;
}