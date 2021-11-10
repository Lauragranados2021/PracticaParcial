//
// Created by lauri on 9/11/2021.
//

#ifndef PRACTICAPARCIAL_ACCOUNT_H
#define PRACTICAPARCIAL_ACCOUNT_H
#include <string>

using namespace std;
class Account {
public:
    const static double minResidue;


    string  getNumber();
    double  getResidue();
    short int getConsignements();
    short int getWithdrawals();
    void consign(double);
    bool Withdrawals(double );
    bool transfer(Account*, double);
    string toString();

    Account(string, double);
    void setNumber(string);
    virtual ~Account();
private:
    string number;
    double residue;
    short int consignemts;
    short int withdrawals;



    void setResidue(double);
    string parseString(double);

};


#endif //PRACTICAPARCIAL_ACCOUNT_H
