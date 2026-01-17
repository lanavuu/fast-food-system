#include "Register.hpp"
#include "../Stores/SuperPoke.hpp"

#include <iostream>

registerSys::registerSys() 
: penny_(1), nickel_(5), dime_(10), quarter_(25), paymentType_(paymentType::Cash)


{ // use initialzier because its a const. future ref, using this is best with const and references

}

paymentType registerSys::getPaymentType() const { //returning cash or card
    return paymentType_;
}

void registerSys::setPayment(paymentType type) {
    paymentType_ = type;
}

double registerSys::change(double moneyGiven, double moneyOwed) {

    return moneyGiven - moneyOwed;

}
// TODO: Compare the change, if user input == rng input then continue
// else repeat until user puts in the correct change
bool registerSys::compareChange(double amountDue, double userGiven) {
    return amountDue == userGiven;

}

