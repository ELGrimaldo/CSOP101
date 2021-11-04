class lend{
    private:
        double amountToLend;
        int monthsToPay;
    
    public:
        void setAmountMonths(double amount, int months){
            amountToLend = amount;
            monthsToPay = months;
        }

        double monthlyInterest(){
            double monthlyInterest = amountToLend * 0.06;
            return monthlyInterest;
        }

        double totalMonthlyInterest(){
            double totalMonthlyInterest = monthlyInterest() * monthsToPay;
            return totalMonthlyInterest;
        }

        double totalAmountToRecieve(){
            double totalAmountToRecieve = amountToLend - totalMonthlyInterest();
            return totalAmountToRecieve;
        }

        double monthlyPayment(){
            double monthlyPayment = amountToLend / monthsToPay;
            return monthlyPayment;
        }
};
    