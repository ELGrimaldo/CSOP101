#include<iostream>
#include "computeProduct.h"
using namespace std;
int main()
{
    computeProductAmount compute;
    int prod1 = 10;
    int prod2 = 20;
    int prod3 = 30;

    int noOfItemsProd1, noOfItemsProd2, noOfItemsProd3;
 
    cout<<"No. of orders for Product 1: ";
    cin>> noOfItemsProd1;
    cout<<"No. of orders for Product 2: ";
    cin>> noOfItemsProd2;
    cout<<"No. of orders for Product 3: ";
    cin>> noOfItemsProd3;

    int totalAmount1 = compute.computeTotalProd(prod1, noOfItemsProd1);
    int totalAmount2 = compute.computeTotalProd(prod2, noOfItemsProd2);
    int totalAmount3 = compute.computeTotalProd(prod3, noOfItemsProd3);

    cout<< "Total Amount of Product 1.: "<< totalAmount1 << endl;
    cout<< "Total Amount of Product 2.: "<< totalAmount2 << endl;
    cout<< "Total Amount of Product 3.: "<< totalAmount3 << endl;

    cout<< "Total Amount:" << compute.computeTotal(totalAmount1, totalAmount2, totalAmount3);

}