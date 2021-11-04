#include<iostream>
#include "arithmetic.h"
using namespace std;
int main()
{
Arithmetic operators;
int answer;

double firstNumber, secondNumber, thirdNumber, fourthNumber;

cout<<"Enter number: ";
cin>>operators.firstNumber;
cout<<"Enter number: ";
cin>>operators.secondNumber;

answer=operators.computeSum(operators.firstNumber,operators.secondNumber);
int product = operators.computeProduct(operators.firstNumber, operators.secondNumber);
int quotient = operators.computeQuotient(operators.firstNumber, operators.secondNumber);

cout<<"SUM: "<<answer<<endl;
cout<<"DIFFERENCE: "<<operators.computeDifference(operators.firstNumber,operators.secondNumber)<<endl;
cout<<"PRODUCT: "<< product <<endl;
cout<<"QUOTIENT: "<< quotient << endl;




return 0;
}