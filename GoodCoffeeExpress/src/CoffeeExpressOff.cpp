#include "CoffeeExpressOff.hpp"
#include <iostream>
CoffeeExpressOff::CoffeeExpressOff(CoffeeExpress* express)
    : coffeeExpress_(express) {}

void CoffeeExpressOff::on() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOff::makeCoffee() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOff::boilingUpWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOff::grindCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOff::lackOfCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOff::lackOfWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOff::wait() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOff::off() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressOff::setState(CoffeeExpress* express) {
    this->coffeeExpress_ = express;
}
