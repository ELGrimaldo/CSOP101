//based class for installment fee
class Installment{
    public:
        double tuitionFee, numUnits, amtPerUnit, totalFee;
        double miscFee = 3000.00;
        double labFee = 1000.00;

        void setNumAndAmtperUnit(double numberOfUnits, double amountPerUnit){
            numUnits   = numberOfUnits;
            amtPerUnit = amountPerUnit;
        }

        double computeTuitionFee(){
            tuitionFee = numUnits * amtPerUnit;
            return tuitionFee;
        }

        double computeTotalFee(){
            totalFee = computeTuitionFee() + miscFee + labFee;
            return totalFee;
        }

        

};

//derived classes for 3 months
class ThreeMonths: public Installment{
    public:
        double installment;

        double displayInstallment(){
            installment = computeTotalFee() / 3;
            return installment;
        }
};

//derived classes for 4 months
class FourMonths: public Installment{
    public:
        double installment;
        

        double displayInstallment(){
            installment = computeTotalFee() / 4;
            return installment;
        }
};


//derived classes for 5 months
class FiveMonths: public Installment{
    public:
        double installment;
        

        double displayInstallment(){
            installment = computeTotalFee() / 5;
            return installment;
        }
};