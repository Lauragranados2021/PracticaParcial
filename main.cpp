#include <iostream>
#include "Account.h"
using namespace std;
int main() {
Account ctaOne("45929583-7",70000);
ctaOne.consign(120000);
ctaOne.consign(50000);
cout<<ctaOne.toString();
Account* ctaDos=new Account("567389-8",500000);
cout<<ctaDos->toString();
if(ctaDos->transfer(&ctaOne,70000)){
    cout<<ctaOne.getNumber()<<"Transferencia existosa";

}
else{
    cout<<ctaOne.getNumber()<<"Transferencia fallida";
}
delete(ctaDos);
    return 0;
}
