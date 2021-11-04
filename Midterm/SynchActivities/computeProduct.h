class computeProductAmount{
    public:
        int totalAmount;

    int computeTotalProd(int prodPrice, int numberOfProducts){
        int amount;
        amount = prodPrice * numberOfProducts;
        return amount;
    }

    int computeTotal(int amountProd1,int amountProd2,int amountProd3){
        totalAmount = amountProd1 + amountProd2 +amountProd3;
        return totalAmount; 
    }


};