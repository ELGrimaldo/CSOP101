class Arithmetic{
public:
int firstNumber, secondNumber, sum;

int computeSum(int firstValue, int secondValue)
{
    sum = firstValue + secondValue;
    return sum;
}

int computeDifference(int firstValue, int secondValue)
{
    int difference;
    difference = firstValue - secondValue;
    return difference;
}

int computeProduct(int firstValue, int secondValue){
    
    int product;
    product = firstValue * secondValue;
    return product;
}

int computeQuotient(int firstValue, int secondValue){
    
    double quotient;
    quotient = firstValue / secondValue;
    return quotient;
}


};