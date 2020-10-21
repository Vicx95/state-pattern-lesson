#include "CoffeeExpressWait.hpp"
#include <iostream>
CoffeeExpressWait::CoffeeExpressWait(CoffeeExpress* express)
    : coffeeExpress_(express) {}

void CoffeeExpressWait::on() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressWait::makeCoffee() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressWait::boilingUpWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressWait::grindCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressWait::lackOfCoffeeBeans() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressWait::lackOfWater() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressWait::wait() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressWait::off() {
    std::cout << __PRETTY_FUNCTION__ << '\n';
}

void CoffeeExpressWait::setState(CoffeeExpress* express) {
    this->coffeeExpress_ = express;
}
