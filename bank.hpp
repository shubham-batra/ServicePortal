#include <string>
class bank {

public:
void displayBalance();
double deposit();
double withsdraw();

private:
double balance = 1000;
std::string firstName;
std::string lastName;

};