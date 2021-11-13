//base class
class Basevalue {
    public:
        int base;
        void getBase(int baseVal)
        {
            base=baseVal;
        }
};

//derived class
class RaiseToTwo: public Basevalue{
    public:
        int getSquared()
        {
            int value = base * base;
            return value;
        }
};


//derived class
class RaiseToThree: public Basevalue{
    public:
        int getCubed()
        {
            int value = base * base * base;
            return value;
        }
};


