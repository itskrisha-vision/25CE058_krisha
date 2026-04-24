#ifndef LOAN_ACCOUNT_H
#define LOAN_ACCOUNT_H


class loan_account
{
    public:
        loan_account();

        int Getloan_id() { return loan_id; }
        void Setloan_id(int val) { loan_id = val; }
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        int Gettenure() { return tenure; }
        void Settenure(int val) { tenure = val; }
        float Getinterest_rate() { return interest_rate; }
        void Setinterest_rate(float val) { interest_rate = val; }
        float Getemi() { return emi; }
        void Setemi(float val) { emi = val; }
        double Getloan_amount() { return loan_amount; }
        void Setloan_amount(double val) { loan_amount = val; }

    protected:

    private:
        int loan_id;
        string name;
        int tenure;
        float interest_rate;
        float emi;
        double loan_amount;
};

#endif // LOAN_ACCOUNT_H
