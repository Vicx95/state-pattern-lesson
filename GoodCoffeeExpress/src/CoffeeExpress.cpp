#include "CoffeeExpress.hpp"
#include <iostream>

CoffeeExpress::CoffeeExpress(CoffeeExpressState* state)
    : state_(state) {}

void CoffeeExpress::on() {
    state_->setState(this);
    state_->on();
}

void CoffeeExpress::makeCoffee() {
    std::cout << "Making cofee..." << '\n';
}

void CoffeeExpress::boilingUpWater() {
    std::cout << "Boiling up water..." << '\n';
}

void CoffeeExpress::grindCoffeeBeans() {
    std::cout << "Grinding coffee beans..." << '\n';
}

void CoffeeExpress::off() {
    std::cout << "Coffee express is off..." << '\n';
}

void CoffeeExpress::wait() {
    std::cout << "I'm ready for action..." << '\n';
}

void CoffeeExpress::printMenu() {
    std::cout << "Hello, it's your coffee express :)\n"
              << "1 - ON\n"
              << "2 - Make coffee\n"
              << "3 - OFF\n";
}

void CoffeeExpress::changeState(CoffeeExpressState* state) {
    //std::cout << "Change state to: " << *typeid(*state).name() << '\n';
    if (this->state_ != nullptr) {
        delete this->state_;
    }
    this->state_ = state;
    this->state_->setState(this);
}

CoffeeExpress::~CoffeeExpress() {
    delete state_;
}
