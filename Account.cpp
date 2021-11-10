//
// Created by lauri on 9/11/2021.
//

#include "Account.h"
#include <sstream>
const double Account::minResidue=50000;
Account::Account(string number, double residue) {//:: operador de resolucion de ambito

    setNumber(number);
    setResidue(residue);
    this->consignemts=0;
    this->withdrawals=0;


}

Account::~Account() {

}

void Account::setNumber(string number) {
this->number=number;
}

void Account::setResidue(double residue) {
    Account::residue=residue;

}

string Account::getNumber() {
    return this->number;
}

double Account::getResidue() {
    return this->residue;
}

short int Account::getConsignements() {
    return this->consignemts;
}



short int Account::getWithdrawals() {
    return this->withdrawals;
}

bool Account::Withdrawals(double value) {//retiros
    if(value<=getResidue()-minResidue){
        setResidue((getResidue()-value));
        withdrawals++;
        return true;
    }
    return false;
}

void Account::consign(double value) {
    setResidue((getResidue()+value));
    consignemts++;
}

bool Account::transfer(Account * account, double value) {
    if((Withdrawals (value))){
        account->consign(value);
        return true;

    }
    return false;
}


string Account::toString() {
    return "Account [number= "+number +" residue "+ parseString(residue)+
    " consignement "+ parseString(consignemts)+" Withdrawals "+ parseString(withdrawals)+"]";

}

string Account::parseString(double value) {
    ostringstream aux;
    aux<<value;
    return aux.str();
}
