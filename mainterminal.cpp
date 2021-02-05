#include <iostream>
#include "mainterminal.hpp"
#include "bankterminal.hpp"

void mainterminal::mainloop() {

// Locations
std::cout<<"Welcome to ShubhamNet!"<<std::endl;
std::cout<<"1. Book Flight"<<std::endl;
std::cout<<"2. Access Bank"<<std::endl;
std::cout<<"3. Exit"<<std::endl;

// Instantiate Objects
bankterminal obj2;

// User Input
int userInput;
std::cin>>userInput;

// Go to Book Flight
if(userInput==1) {
    std::cout<<"Currently unable to book flights, try later"<<std::endl;
    mainloop();
}
// Go to Bank
else if(userInput==2) {
    obj2.bankMenu();
}
else if(userInput==3) {
    // Exit
}
// Give user chance to enter again later
else {
    std::cout<<"Invalid Input, try again"<<std::endl;
    mainloop();
}

}