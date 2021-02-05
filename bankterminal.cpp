#include <iostream>
#include "bankterminal.hpp"
#include "bank.hpp"
#include "mainterminal.hpp"

bank obj1; // Global object, reusable
mainterminal obj2; // To go back into the main loop

void bankterminal::bankMenu() {
std::cout<<"Welcome to the Bank!"<<std::endl;
std::cout<<"Your current total is $";
obj1.displayBalance();
std::cout<<"";
std::cout<<"1. Deposit Money"<<std::endl;
std::cout<<"2. Withsdraw Money"<<std::endl;
std::cout<<"3. Exit"<<std::endl;

// User Input
int userInput;
std::cin>>userInput;

if(userInput==1) {
obj1.deposit();
std::cout<<"Your total is now $";
obj1.displayBalance();
bankMenu();
}

if(userInput==2) {
obj1.withsdraw();
std::cout<<"Your total is now $";
obj1.displayBalance();
bankMenu();
}

if(userInput==3) {
  obj2.mainloop();
}



}