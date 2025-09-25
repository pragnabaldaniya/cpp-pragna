#include <iostream>
using namespace std;

// parent class
class RBI
{
    private:
        double rate;

      protected:
        RBI()
        {
            this -> rate = 7.9;
        }

        void findBankRate(double total_amount, string bank_name)
        {
            double final_amount =  (total_amount * rate) / 100;
            cout << endl << bank_name << " : " << final_amount << endl << endl;
        }
};

// child class
class SBI : public RBI
{
    private:
        double total_amount;

    public:
        void setTotalAmountSBI()
        {                                                          
            cout << "Enter SBI Total Amount : ";
            cin >> this -> total_amount;

            findBankRate(this -> total_amount, "SBI");
        }
};

class BOB : public RBI
{
    private:
        double total_amount;


    public:
        void setTotalAmountBOB()
        {
            cout << "Enter BOB Total Amount : ";
            cin >> this -> total_amount;

            findBankRate(this -> total_amount, "BOB");
        }
};

class ICICI : public RBI
{
    private:
        double total_amount;

    public:
        void setTotalAmountICICI()
        {
            cout << "Enter ICICI Total Amount : ";
            cin >> this -> total_amount;

            findBankRate(this -> total_amount, "ICICI");
        }
};






