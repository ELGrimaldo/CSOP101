#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*
Activity Name: Prelim Exam
Submitted by: James Leo C. Grimaldo
Date: 09/17/21

Instructions: 
Using C++ language, create a program that will perform the given algorithm using variables,
data types, operators, input/output statements, and selection statements.

*/

int main(){

    float purchasedAmount; 
    char isMember; 
    float discount = 0.0;
    float DiscountedAmount;

    cout << "Amount Purchased: ";
    cin >> purchasedAmount;

    cout << "Are you a member?(y/n): ";
    cin >> isMember;

    if (isMember == 'y'){
        if (purchasedAmount >= 5000.00 && purchasedAmount <= 10000.00){
            discount = purchasedAmount * 0.05; 
        } else if (purchasedAmount > 10000.00 && purchasedAmount <= 30000.00){
            discount = purchasedAmount * 0.07;
        } else if (purchasedAmount > 30000.00 && purchasedAmount <= 50000.00){
            discount = purchasedAmount * 0.1;
        } else if (purchasedAmount > 50000.00){
            discount = purchasedAmount * 0.15;
        } else {
            discount = 0;
        }
        DiscountedAmount = purchasedAmount - discount;
        cout << "Discount Amount: " << discount << endl;
        cout << "Total Discounted Amount: "<< DiscountedAmount ;
    } else if (isMember == 'n'){
        cout << "Discount Amount: " << discount << endl;
        cout << "Total Discounted Amount: "<< purchasedAmount ;
    } 



    return 0;
};