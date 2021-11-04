#include <iostream>
using namespace std;


int getValue(int number);


int main(){

    int index = 1, sumOfIndex;
    do{
        sumOfIndex = getValue(index);
        index = index+2;
        cout<< index<<". Index: "<<sumOfIndex<<endl;
    }while(sumOfIndex<=10);
}

int getValue(int number){
    int answer;
    answer = number *2;
    return answer;
}