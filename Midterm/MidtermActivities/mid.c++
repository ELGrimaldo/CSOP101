// First online quiz (Midterm Participation)

#include <iostream>
using namespace std;

int main(){

    int nums[10];

    int index = 0;

    while(index <=9){
        nums[index] = index; 
        index++;
    }

    int i;
    for(i=0; i<=9; i++){
        cout<<"Number at index["<<i<<"] = "<< nums[i]<< endl;
    }

}