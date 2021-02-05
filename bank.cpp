#include "bank.hpp"
#include <iostream>


double bank::deposit() {
return balance-=100;
}

double bank::withsdraw() {
return balance+=100;
}

void bank::displayBalance() {
    std::cout<<balance<<std::endl;
}