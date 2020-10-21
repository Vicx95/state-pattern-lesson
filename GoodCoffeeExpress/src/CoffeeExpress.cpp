#include "CoffeeExpress.hpp"
#include <iostream>

CoffeeExpress::CoffeeExpress(CoffeeExpressState* state)
    : state_(state) {}

void CoffeeExpress::on() {
    state_->setState(this);
    state_->on();
}

void CoffeeExpress::makeCoffee() {
    state_->setState(this);
    state_->makeCoffee();
}

void CoffeeExpress::boilingUpWater() {
    state_->setState(this);
    state_->boilingUpWater();
}

void CoffeeExpress::grindCoffeeBeans() {
    state_->setState(this);
    state_->grindCoffeeBeans();
}

void CoffeeExpress::off() {
    state_->setState(this);
    state_->off();
}

void CoffeeExpress::wait() {
    state_->setState(this);
    state_->wait();
}

void CoffeeExpress::printMenu() {
    std::cout << "Hello, it's your coffee express :)\n"
              << "1 - ON\n"
              << "2 - Make coffee\n"
              << "3 - OFF\n";
}

void CoffeeExpress::changeState(CoffeeExpressState* state) {
    if (this->state_ != nullptr) {
        delete this->state_;
    }
    this->state_ = state;
    this->state_->setState(this);
}

CoffeeExpress::~CoffeeExpress() {
    delete state_;
}
